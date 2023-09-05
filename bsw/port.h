#include "E:\Embedded\Tasks\TrainingProject4\tm4c123gh6pm.h"
#include "E:\Embedded\Tasks\TrainingProject4\bsw\Port_Types.h"
#include "E:\Embedded\Tasks\TrainingProject4\bsw\Port_LCfg.h"

//#define GPIO_PORTA_BASE_ADDRESS GPIO_PORTA_DATA_BITS_R
//#define GPIO_PORTB_BASE_ADDRESS GPIO_PORTB_DATA_BITS_R
//#define GPIO_PORTC_BASE_ADDRESS GPIO_PORTC_DATA_BITS_R
//#define GPIO_PORTD_BASE_ADDRESS GPIO_PORTD_DATA_BITS_R
//#define GPIO_PORTE_BASE_ADDRESS GPIO_PORTE_DATA_BITS_R
//#define GPIO_PORTF_BASE_ADDRESS GPIO_PORTF_DATA_BITS_R

//volatile unsigned long*  portNumber[6] = {
//  GPIO_PORTA_DATA_BITS_R,
//  GPIO_PORTB_DATA_BITS_R,
//  GPIO_PORTC_DATA_BITS_R,
//  GPIO_PORTD_DATA_BITS_R,
//  GPIO_PORTE_DATA_BITS_R,
//  GPIO_PORTF_DATA_BITS_R
//};

typedef enum
{
  PORTA,
  PORTB,
  PORTC,
  PORTD,
  PORTE,
  PORTF,
}tivaPorts;

#define  PORTDATAOFFSET 0x3FC
#define  PORTDIROFFSET  0x400
#define  PORTPUROFFSET  0x510
#define  PORTPDROFFSET  0x514
#define  PORTDENOFFSET  0x51c
#define  PORTLOCKOFFSET 0x520
#define  PORTCOMMITOFFSET 0x524

typedef PortPin_s Port_ConfigType; 




void Port_Init (const Port_ConfigType* ConfigPtr);
