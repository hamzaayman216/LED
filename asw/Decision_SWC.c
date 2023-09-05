#include "E:\Embedded\Tasks\TrainingProject3\rte\Rte_Decision_SWC.h"
#include "E:\Embedded\Tasks\TrainingProject\macros.h"



/*
*Runnable:Decision_SWC_Runnable_1
*Event Type:periodic
*DATA ACCESS:
* DATA READ ACCESS:   sendOrder_Element_1_isClockWise    Rte_Read_receiver_sendOrder_Element_1_isClockWise()
* DATA READ ACCESS:   sendOrder_Element_2_readData    Rte_Read_receiver_sendOrder_Element_2_readData()
*/
void Decision_SWC_Runnable_1(void){
  
  variable_isClockWise isClockWise = 0;
  variable_readData readData = 0;
  
  //Rte_IRead_Decision_SWC_Runnable_1_receiver_sendOrder_Element_1_isClockWise (&isClockWise);
  //Rte_IRead_Decision_SWC_Runnable_1_receiver_sendOrder_Element_2_isClockWise (&readData);
  //Rte_Read_receiver_sendOrder_Element_1_isClockWise(&isClockWise);
  //Rte_Read_receiver_sendOrder_Element_2_readData(&readData);
  uint8 write_in_client_server_Operation_updateLED_Argument_1;
  if(isClockWise)
  {
    if((readData & 0x02) == 0x02)
    {
      write_in_client_server_Operation_updateLED_Argument_1 = 0x04;
    }
    else if((readData & 0x04) == 0x04)
    {
      write_in_client_server_Operation_updateLED_Argument_1 = 0x08;
    }
    else if((readData & 0x08) == 0x08)
    {
      write_in_client_server_Operation_updateLED_Argument_1 = 0x02;
    }
    else
    {
      write_in_client_server_Operation_updateLED_Argument_1 = 0x02;
    }
    
  }
  else
  {
    if((readData & 0x02) == 0x02)
    {
      write_in_client_server_Operation_updateLED_Argument_1 = 0x08;
    }
    else if((readData & 0x04) == 0x04)
    {
      write_in_client_server_Operation_updateLED_Argument_1 = 0x02;
    }
    else if((readData & 0x08) == 0x08)
    {
      write_in_client_server_Operation_updateLED_Argument_1 = 0x04;
    }
    else
    {
      write_in_client_server_Operation_updateLED_Argument_1 = 0x08;
    }
  }
  
  Rte_Call_client_update_LED_port_write_in_client_server_Operation_updateLED(write_in_client_server_Operation_updateLED_Argument_1);
  

}


