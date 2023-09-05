#include "E:\Embedded\Tasks\TrainingProject4\bsw\port.h"
#include "E:\Embedded\Tasks\TrainingProject4\bsw\Port_LCfg.h"
#include "E:\Embedded\Tasks\TrainingProject4\macros.h"
void Port_Init (const Port_ConfigType* ConfigPtr)
{
  for(int i = 0; i < PORT_PIN_SIZE; i++)
  {
      uint8 porto = (ConfigPtr[i].PortPinId / 8);  //needs casting
      
      SET_BIT(SYSCTL_RCGCGPIO_R, porto);     // open clock
      //SYSCTL_RCGCGPIO_R = 0X3F;
      volatile unsigned long * portoo;
      switch(porto)
      {
      case PORTA:
            portoo = GPIO_PORTA_DATA_BITS_R;
            break;
       case PORTB:
            portoo = GPIO_PORTB_DATA_BITS_R;
            break;
        case PORTC:
            portoo = GPIO_PORTC_DATA_BITS_R;
            break;
        case PORTD:
            portoo = GPIO_PORTD_DATA_BITS_R;
            break;
        case PORTE:
            portoo = GPIO_PORTE_DATA_BITS_R;
            break;
        case PORTF:
            portoo = GPIO_PORTF_DATA_BITS_R;
            break;
      }
      
      
      SET_BIT(*(volatile unsigned long *)((unsigned long)portoo + PORTCOMMITOFFSET) ,(ConfigPtr[i].PortPinId % 8));
      
      if(ConfigPtr[i].PortPinDirection == PORT_PIN_IN)
      { 
        CLEAR_BIT(*(volatile unsigned long *)((unsigned long)portoo + PORTDIROFFSET) , ((ConfigPtr[i].PortPinId % 8) - 1));
          
          if(ConfigPtr[i].PortPinInputPullResistor == PORT_PIN_IN_PULL_UP)
          {
            SET_BIT(*(volatile unsigned long *)((unsigned long)portoo + PORTPUROFFSET), ((ConfigPtr[i].PortPinId % 8) - 1));
          }
          else if(ConfigPtr[i].PortPinInputPullResistor == PORT_PIN_IN_PULL_DOWN)
          {
            SET_BIT(*(volatile unsigned long *)((unsigned long)portoo + PORTPDROFFSET), ((ConfigPtr[i].PortPinId % 8) - 1));
          }
          (*(volatile unsigned long *)((unsigned long)portoo + PORTLOCKOFFSET)) = 0x4C4F434B;
          // else if(ConfigPtr[i].PortPinInputPullResistor == PORT_PIN_IN_NO_PULL){}
      }
      else if(ConfigPtr[i].PortPinDirection == PORT_PIN_OUT)
      {
          SET_BIT(*(volatile unsigned long *)((unsigned long)portoo + PORTDIROFFSET) , ((ConfigPtr[i].PortPinId % 8) - 1));
          
        if(ConfigPtr[i].PortPinLevelValue == PORT_PIN_LEVEL_HIGH)
        {
          SET_BIT(*(volatile unsigned long *)((unsigned long)portoo + PORTDATAOFFSET), ((ConfigPtr[i].PortPinId % 8) - 1));
        }
        else
        {
            CLEAR_BIT(*(volatile unsigned long *)((unsigned long)portoo + PORTDATAOFFSET), ((ConfigPtr[i].PortPinId % 8) - 1));
        }

      }
      
//      volatile unsigned long *x = (volatile unsigned long *)portoo;
//      x = (volatile unsigned long *)((unsigned long)x + 0x51c);

      //      volatile unsigned long *x =  (volatile unsigned long *)0x40004000;
//      x =  x  + 0x400;            //PORTDENOFFSET);
      
      
      SET_BIT(*(volatile unsigned long *)((unsigned long)portoo + PORTDENOFFSET), ((ConfigPtr[i].PortPinId % 8) - 1));
     
      
      
      
      // SET_BIT(*(portoo + PORTDENOFFSET), ((ConfigPtr[i].PortPinId % 8) - 1));
      
      
  }

  
//  
//    for(int i = 0; i < PORT_PIN_SIZE ; i++)
//    {
//      uint8 id =ConfigPtr[i].PortPinId;
//      uint8 portKam =0;
//      if(id < 9){
//        //portA
//        portKam=0;
//      }
//      else if(id < 17){
//        //portB
//        portKam=1;
//      }
//      else if(id < 25){
//        //portC
//        portKam=2;
//      }
//      else if(id < 33){
//        //portD
//        portKam=3;
//      }
//     else if(id < 41){
//        //portE
//        portKam=4;
//      }
//      else if(id < 49){
//        //portF
//        portKam=5;
//      }
//    }
//    id%=8;
//    switch(portKam){
//    case 0:
//      SYSCTL_RCGCGPIO_R|=(1<<portKam);
//      (GPIO_PORTA_BASE_ADDRESS +PORTLOCKOFFSET)=0x4C4F434B;
//      if(ConfigPtr[i].PortPinDirection==PORT_PIN_OUT)
//        (GPIO_PORTA_BASE_ADDRESS+PORTDIROFFSET)|=(1<<id);
//      else if (ConfigPtr[i].PortPinDirection==PORT_PIN_IN) {
//        (GPIO_PORTA_BASE_ADDRESS+PORTDIROFFSET)&=~(1<<id);
//        (GPIO_PORTA_BASE_ADDRESS+PORTPUROFFSET)|=(1<<id);
//      }
//      else{
//        (GPIO_PORTA_BASE_ADDRESS+PORTDIROFFSET)&=~(1<<id);
//        (GPIO_PORTA_BASE_ADDRESS+PORTPUROFFSET)&=~(1<<id);
//        (GPIO_PORTA_BASE_ADDRESS+PORTDENOFFSET)&=~(1<<id);
//      }
//      break;
//    
//    
//    }
}