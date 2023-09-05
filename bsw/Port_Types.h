#ifndef PORT_TYPES_H_
#define PORT_TYPES_H_

#include "E:\Embedded\Tasks\TrainingProject3\rte\Std_Types.h"


typedef enum
{

	PORT_PIN_IN,
	PORT_PIN_OUT

}PortPinDirection_e;

typedef enum
{

	PORT_PIN_MODE_ADC_I,
	PORT_PIN_MODE_CAN_I,
	PORT_PIN_MODE_DIO_I,
	PORT_PIN_MODE_DIO_GPT_I,
	PORT_PIN_MODE_DIO_WDG_I,
	PORT_PIN_MODE_FLEXRAY_I,
	PORT_PIN_MODE_ICU_I,
	PORT_PIN_MODE_LIN_I,
	PORT_PIN_MODE_MEM_I,
	PORT_PIN_MODE_PWM_I,
	PORT_PIN_MODE_SPI_I

}PortPinInitialMode_e;

typedef enum
{

	PORT_PIN_MODE_ADC,
	PORT_PIN_MODE_CAN,
	PORT_PIN_MODE_DIO,
	PORT_PIN_MODE_DIO_GPT,
	PORT_PIN_MODE_DIO_WDG,
	PORT_PIN_MODE_FLEXRAY,
	PORT_PIN_MODE_ICU,
	PORT_PIN_MODE_LIN,
	PORT_PIN_MODE_MEM,
	PORT_PIN_MODE_PWM,
	PORT_PIN_MODE_SPI

}PortPinMode_e;

typedef enum
{

	PORT_PIN_LEVEL_HIGH,
	PORT_PIN_LEVEL_LOW

}PortPinLevelValue_e;


typedef enum
{

	PORT_PIN_IN_NO_PULL,
	PORT_PIN_IN_PULL_DOWN,
	PORT_PIN_IN_PULL_UP

}PortPinInputPullResistor_e;

typedef struct{
   uint8 PortContainer_startingIndex;
   uint8 PortContainer_numberOfInstances;
}PortConfigSet_s;

typedef struct{
       uint8 PortNumberOfPortPins;
       uint8 PortPin_startingIndex;
       uint8 PortPin_numberOfInstances;
  
}PortContainer_s;

typedef struct{
      PortPinDirection_e PortPinDirection;
      uint8 PortPinDirectionChangeable;
      uint8 PortPinId;
      PortPinInitialMode_e PortPinInitialMode;
      PortPinLevelValue_e PortPinLevelValue;
      PortPinMode_e PortPinMode;
      uint8 PortPinModeChangeable;
      PortPinInputPullResistor_e PortPinInputPullResistor;
}PortPin_s;


#endif