

/******************************************************************************************
****************************************Port Module****************************************
*********************************Link-Time Configurations*********************************
******************************************************************************************/





#include "Port_LCfg.h"



/******************************************************************************************
********************************** Linker Configurations **********************************
******************************************************************************************/




/******************************************************************************************
***************************** Port Containers Configurations  *****************************
******************************************************************************************/






/******************************************************************************************
**********************************PortConfigSet Container**********************************
*******************************Size And Array Of Structures*******************************
**********************************Linking Configurations **********************************
******************************************************************************************/

/* Size Variable Linking Configuration*/
uint8 lcfg_PortConfigSet_size = PORT_CONFIG_SET_SIZE;

/* Array Of Structures Linking Configurations*/
PortConfigSet_s PortConfigSet[PORT_CONFIG_SET_SIZE] =
{
	{	/*Instance_0*/
		.PortContainer_startingIndex = PORT_CONTAINER_0_STARTING_INDEX,
		.PortContainer_numberOfInstances = PORT_CONTAINER_0_NUMBER_INSTANCES
	}
};



/******************************************************************************************
**********************************PortContainer Container**********************************
*******************************Size And Array Of Structures*******************************
**********************************Linking Configurations **********************************
******************************************************************************************/

/* Size Variable Linking Configuration*/
uint8 lcfg_PortContainer_size = PORT_CONTAINER_SIZE;

/* Array Of Structures Linking Configurations*/
PortContainer_s PortContainer[PORT_CONTAINER_SIZE] =
{
	{	/*Instance_0*/
		.PortNumberOfPortPins = 5,
		.PortPin_startingIndex = PORT_PIN_0_STARTING_INDEX,
		.PortPin_numberOfInstances = PORT_PIN_0_NUMBER_INSTANCES
	},
	{	/*Instance_1*/
		.PortNumberOfPortPins = DEFAULT_PARAMETER_16BIT_VALUE,
		.PortPin_startingIndex = PORT_PIN_1_STARTING_INDEX,
		.PortPin_numberOfInstances = PORT_PIN_1_NUMBER_INSTANCES
	},
	{	/*Instance_2*/
		.PortNumberOfPortPins = DEFAULT_PARAMETER_16BIT_VALUE,
		.PortPin_startingIndex = PORT_PIN_2_STARTING_INDEX,
		.PortPin_numberOfInstances = PORT_PIN_2_NUMBER_INSTANCES
	},
	{	/*Instance_3*/
		.PortNumberOfPortPins = DEFAULT_PARAMETER_16BIT_VALUE,
		.PortPin_startingIndex = PORT_PIN_3_STARTING_INDEX,
		.PortPin_numberOfInstances = PORT_PIN_3_NUMBER_INSTANCES
	},
	{	/*Instance_4*/
		.PortNumberOfPortPins = DEFAULT_PARAMETER_16BIT_VALUE,
		.PortPin_startingIndex = PORT_PIN_4_STARTING_INDEX,
		.PortPin_numberOfInstances = PORT_PIN_4_NUMBER_INSTANCES
	},
	{	/*Instance_5*/
		.PortNumberOfPortPins = DEFAULT_PARAMETER_16BIT_VALUE,
		.PortPin_startingIndex = PORT_PIN_5_STARTING_INDEX,
		.PortPin_numberOfInstances = PORT_PIN_5_NUMBER_INSTANCES
	}
};



/******************************************************************************************
*************************************PortPin Container*************************************
*******************************Size And Array Of Structures*******************************
**********************************Linking Configurations **********************************
******************************************************************************************/
/* Size Variable Linking Configuration*/
uint8 lcfg_PortPin_size = PORT_PIN_SIZE;

/* Array Of Structures Linking Configurations*/
PortPin_s PortPin[PORT_PIN_SIZE] =
{
	{	/*Instance_0*/
		.PortPinDirection = DEFAULT_PARAMETER_ENUM_VALUE,
		.PortPinDirectionChangeable = FALSE,
		.PortPinId = 1,
		.PortPinInitialMode = DEFAULT_PARAMETER_ENUM_VALUE,
		.PortPinLevelValue = DEFAULT_PARAMETER_ENUM_VALUE,
		.PortPinMode = DEFAULT_PARAMETER_ENUM_VALUE,
		.PortPinModeChangeable = FALSE,
		.PortPinInputPullResistor = PORT_PIN_IN_PULL_UP
	},
	{	/*Instance_1*/
		.PortPinDirection = DEFAULT_PARAMETER_ENUM_VALUE,
		.PortPinDirectionChangeable = FALSE,
		.PortPinId = 2,
		.PortPinInitialMode = DEFAULT_PARAMETER_ENUM_VALUE,
		.PortPinLevelValue = DEFAULT_PARAMETER_ENUM_VALUE,
		.PortPinMode = DEFAULT_PARAMETER_ENUM_VALUE,
		.PortPinModeChangeable = FALSE,
		.PortPinInputPullResistor = PORT_PIN_IN_NO_PULL
	},
	{	/*Instance_2*/
		.PortPinDirection = DEFAULT_PARAMETER_ENUM_VALUE,
		.PortPinDirectionChangeable = FALSE,
		.PortPinId = 3,
		.PortPinInitialMode = DEFAULT_PARAMETER_ENUM_VALUE,
		.PortPinLevelValue = DEFAULT_PARAMETER_ENUM_VALUE,
		.PortPinMode = DEFAULT_PARAMETER_ENUM_VALUE,
		.PortPinModeChangeable = FALSE,
		.PortPinInputPullResistor = PORT_PIN_IN_NO_PULL
	},
	{	/*Instance_3*/
		.PortPinDirection = DEFAULT_PARAMETER_ENUM_VALUE,
		.PortPinDirectionChangeable = FALSE,
		.PortPinId = 4,
		.PortPinInitialMode = DEFAULT_PARAMETER_ENUM_VALUE,
		.PortPinLevelValue = DEFAULT_PARAMETER_ENUM_VALUE,
		.PortPinMode = DEFAULT_PARAMETER_ENUM_VALUE,
		.PortPinModeChangeable = FALSE,
		.PortPinInputPullResistor = PORT_PIN_IN_NO_PULL
	},
	{	/*Instance_4*/
		.PortPinDirection = DEFAULT_PARAMETER_ENUM_VALUE,
		.PortPinDirectionChangeable = FALSE,
		.PortPinId = 5,
		.PortPinInitialMode = DEFAULT_PARAMETER_ENUM_VALUE,
		.PortPinLevelValue = DEFAULT_PARAMETER_ENUM_VALUE,
		.PortPinMode = DEFAULT_PARAMETER_ENUM_VALUE,
		.PortPinModeChangeable = FALSE,
		.PortPinInputPullResistor = PORT_PIN_IN_PULL_UP
	},
	{	/*Instance_5*/
		.PortPinDirection = DEFAULT_PARAMETER_ENUM_VALUE,
		.PortPinDirectionChangeable = FALSE,
		.PortPinId = 6,
		.PortPinInitialMode = DEFAULT_PARAMETER_ENUM_VALUE,
		.PortPinLevelValue = DEFAULT_PARAMETER_ENUM_VALUE,
		.PortPinMode = DEFAULT_PARAMETER_ENUM_VALUE,
		.PortPinModeChangeable = FALSE,
		.PortPinInputPullResistor = PORT_PIN_IN_NO_PULL
	},
	{	/*Instance_6*/
		.PortPinDirection = DEFAULT_PARAMETER_ENUM_VALUE,
		.PortPinDirectionChangeable = FALSE,
		.PortPinId = 7,
		.PortPinInitialMode = DEFAULT_PARAMETER_ENUM_VALUE,
		.PortPinLevelValue = DEFAULT_PARAMETER_ENUM_VALUE,
		.PortPinMode = DEFAULT_PARAMETER_ENUM_VALUE,
		.PortPinModeChangeable = FALSE,
		.PortPinInputPullResistor = PORT_PIN_IN_NO_PULL
	},
	{	/*Instance_7*/
		.PortPinDirection = DEFAULT_PARAMETER_ENUM_VALUE,
		.PortPinDirectionChangeable = FALSE,
		.PortPinId = 8,
		.PortPinInitialMode = DEFAULT_PARAMETER_ENUM_VALUE,
		.PortPinLevelValue = DEFAULT_PARAMETER_ENUM_VALUE,
		.PortPinMode = DEFAULT_PARAMETER_ENUM_VALUE,
		.PortPinModeChangeable = FALSE,
		.PortPinInputPullResistor = PORT_PIN_IN_NO_PULL
	},
	{	/*Instance_8*/
		.PortPinDirection = DEFAULT_PARAMETER_ENUM_VALUE,
		.PortPinDirectionChangeable = FALSE,
		.PortPinId = 9,
		.PortPinInitialMode = DEFAULT_PARAMETER_ENUM_VALUE,
		.PortPinLevelValue = DEFAULT_PARAMETER_ENUM_VALUE,
		.PortPinMode = DEFAULT_PARAMETER_ENUM_VALUE,
		.PortPinModeChangeable = FALSE,
		.PortPinInputPullResistor = PORT_PIN_IN_NO_PULL
	},
	{	/*Instance_9*/
		.PortPinDirection = DEFAULT_PARAMETER_ENUM_VALUE,
		.PortPinDirectionChangeable = FALSE,
		.PortPinId = 10,
		.PortPinInitialMode = DEFAULT_PARAMETER_ENUM_VALUE,
		.PortPinLevelValue = DEFAULT_PARAMETER_ENUM_VALUE,
		.PortPinMode = DEFAULT_PARAMETER_ENUM_VALUE,
		.PortPinModeChangeable = FALSE,
		.PortPinInputPullResistor = PORT_PIN_IN_NO_PULL
	},
	{	/*Instance_10*/
		.PortPinDirection = DEFAULT_PARAMETER_ENUM_VALUE,
		.PortPinDirectionChangeable = FALSE,
		.PortPinId = 11,
		.PortPinInitialMode = DEFAULT_PARAMETER_ENUM_VALUE,
		.PortPinLevelValue = DEFAULT_PARAMETER_ENUM_VALUE,
		.PortPinMode = DEFAULT_PARAMETER_ENUM_VALUE,
		.PortPinModeChangeable = FALSE,
		.PortPinInputPullResistor = PORT_PIN_IN_NO_PULL
	},
	{	/*Instance_11*/
		.PortPinDirection = DEFAULT_PARAMETER_ENUM_VALUE,
		.PortPinDirectionChangeable = FALSE,
		.PortPinId = 12,
		.PortPinInitialMode = DEFAULT_PARAMETER_ENUM_VALUE,
		.PortPinLevelValue = DEFAULT_PARAMETER_ENUM_VALUE,
		.PortPinMode = DEFAULT_PARAMETER_ENUM_VALUE,
		.PortPinModeChangeable = FALSE,
		.PortPinInputPullResistor = PORT_PIN_IN_NO_PULL
	},
	{	/*Instance_12*/
		.PortPinDirection = DEFAULT_PARAMETER_ENUM_VALUE,
		.PortPinDirectionChangeable = FALSE,
		.PortPinId = 13,
		.PortPinInitialMode = DEFAULT_PARAMETER_ENUM_VALUE,
		.PortPinLevelValue = DEFAULT_PARAMETER_ENUM_VALUE,
		.PortPinMode = DEFAULT_PARAMETER_ENUM_VALUE,
		.PortPinModeChangeable = FALSE,
		.PortPinInputPullResistor = PORT_PIN_IN_NO_PULL
	},
	{	/*Instance_13*/
		.PortPinDirection = DEFAULT_PARAMETER_ENUM_VALUE,
		.PortPinDirectionChangeable = FALSE,
		.PortPinId = 14,
		.PortPinInitialMode = DEFAULT_PARAMETER_ENUM_VALUE,
		.PortPinLevelValue = DEFAULT_PARAMETER_ENUM_VALUE,
		.PortPinMode = DEFAULT_PARAMETER_ENUM_VALUE,
		.PortPinModeChangeable = FALSE,
		.PortPinInputPullResistor = PORT_PIN_IN_NO_PULL
	},
	{	/*Instance_14*/
		.PortPinDirection = DEFAULT_PARAMETER_ENUM_VALUE,
		.PortPinDirectionChangeable = FALSE,
		.PortPinId = 15,
		.PortPinInitialMode = DEFAULT_PARAMETER_ENUM_VALUE,
		.PortPinLevelValue = DEFAULT_PARAMETER_ENUM_VALUE,
		.PortPinMode = DEFAULT_PARAMETER_ENUM_VALUE,
		.PortPinModeChangeable = FALSE,
		.PortPinInputPullResistor = PORT_PIN_IN_NO_PULL
	},
	{	/*Instance_15*/
		.PortPinDirection = DEFAULT_PARAMETER_ENUM_VALUE,
		.PortPinDirectionChangeable = FALSE,
		.PortPinId = 16,
		.PortPinInitialMode = DEFAULT_PARAMETER_ENUM_VALUE,
		.PortPinLevelValue = DEFAULT_PARAMETER_ENUM_VALUE,
		.PortPinMode = DEFAULT_PARAMETER_ENUM_VALUE,
		.PortPinModeChangeable = FALSE,
		.PortPinInputPullResistor = PORT_PIN_IN_NO_PULL
	},
	{	/*Instance_16*/
		.PortPinDirection = DEFAULT_PARAMETER_ENUM_VALUE,
		.PortPinDirectionChangeable = FALSE,
		.PortPinId = 17,
		.PortPinInitialMode = DEFAULT_PARAMETER_ENUM_VALUE,
		.PortPinLevelValue = DEFAULT_PARAMETER_ENUM_VALUE,
		.PortPinMode = DEFAULT_PARAMETER_ENUM_VALUE,
		.PortPinModeChangeable = FALSE,
		.PortPinInputPullResistor = PORT_PIN_IN_NO_PULL
	},
	{	/*Instance_17*/
		.PortPinDirection = DEFAULT_PARAMETER_ENUM_VALUE,
		.PortPinDirectionChangeable = FALSE,
		.PortPinId = 18,
		.PortPinInitialMode = DEFAULT_PARAMETER_ENUM_VALUE,
		.PortPinLevelValue = DEFAULT_PARAMETER_ENUM_VALUE,
		.PortPinMode = DEFAULT_PARAMETER_ENUM_VALUE,
		.PortPinModeChangeable = FALSE,
		.PortPinInputPullResistor = PORT_PIN_IN_NO_PULL
	},
	{	/*Instance_18*/
		.PortPinDirection = DEFAULT_PARAMETER_ENUM_VALUE,
		.PortPinDirectionChangeable = FALSE,
		.PortPinId = 19,
		.PortPinInitialMode = DEFAULT_PARAMETER_ENUM_VALUE,
		.PortPinLevelValue = DEFAULT_PARAMETER_ENUM_VALUE,
		.PortPinMode = DEFAULT_PARAMETER_ENUM_VALUE,
		.PortPinModeChangeable = FALSE,
		.PortPinInputPullResistor = PORT_PIN_IN_NO_PULL
	},
	{	/*Instance_19*/
		.PortPinDirection = DEFAULT_PARAMETER_ENUM_VALUE,
		.PortPinDirectionChangeable = FALSE,
		.PortPinId = 20,
		.PortPinInitialMode = DEFAULT_PARAMETER_ENUM_VALUE,
		.PortPinLevelValue = DEFAULT_PARAMETER_ENUM_VALUE,
		.PortPinMode = DEFAULT_PARAMETER_ENUM_VALUE,
		.PortPinModeChangeable = FALSE,
		.PortPinInputPullResistor = PORT_PIN_IN_NO_PULL
	},
	{	/*Instance_20*/
		.PortPinDirection = DEFAULT_PARAMETER_ENUM_VALUE,
		.PortPinDirectionChangeable = FALSE,
		.PortPinId = 21,
		.PortPinInitialMode = DEFAULT_PARAMETER_ENUM_VALUE,
		.PortPinLevelValue = DEFAULT_PARAMETER_ENUM_VALUE,
		.PortPinMode = DEFAULT_PARAMETER_ENUM_VALUE,
		.PortPinModeChangeable = FALSE,
		.PortPinInputPullResistor = PORT_PIN_IN_NO_PULL
	},
	{	/*Instance_21*/
		.PortPinDirection = DEFAULT_PARAMETER_ENUM_VALUE,
		.PortPinDirectionChangeable = FALSE,
		.PortPinId = 22,
		.PortPinInitialMode = DEFAULT_PARAMETER_ENUM_VALUE,
		.PortPinLevelValue = DEFAULT_PARAMETER_ENUM_VALUE,
		.PortPinMode = DEFAULT_PARAMETER_ENUM_VALUE,
		.PortPinModeChangeable = FALSE,
		.PortPinInputPullResistor = PORT_PIN_IN_NO_PULL
	},
	{	/*Instance_22*/
		.PortPinDirection = DEFAULT_PARAMETER_ENUM_VALUE,
		.PortPinDirectionChangeable = FALSE,
		.PortPinId = 23,
		.PortPinInitialMode = DEFAULT_PARAMETER_ENUM_VALUE,
		.PortPinLevelValue = DEFAULT_PARAMETER_ENUM_VALUE,
		.PortPinMode = DEFAULT_PARAMETER_ENUM_VALUE,
		.PortPinModeChangeable = FALSE,
		.PortPinInputPullResistor = PORT_PIN_IN_NO_PULL
	},
	{	/*Instance_23*/
		.PortPinDirection = DEFAULT_PARAMETER_ENUM_VALUE,
		.PortPinDirectionChangeable = FALSE,
		.PortPinId = 24,
		.PortPinInitialMode = DEFAULT_PARAMETER_ENUM_VALUE,
		.PortPinLevelValue = DEFAULT_PARAMETER_ENUM_VALUE,
		.PortPinMode = DEFAULT_PARAMETER_ENUM_VALUE,
		.PortPinModeChangeable = FALSE,
		.PortPinInputPullResistor = PORT_PIN_IN_NO_PULL
	},
	{	/*Instance_24*/
		.PortPinDirection = DEFAULT_PARAMETER_ENUM_VALUE,
		.PortPinDirectionChangeable = FALSE,
		.PortPinId = 25,
		.PortPinInitialMode = DEFAULT_PARAMETER_ENUM_VALUE,
		.PortPinLevelValue = DEFAULT_PARAMETER_ENUM_VALUE,
		.PortPinMode = DEFAULT_PARAMETER_ENUM_VALUE,
		.PortPinModeChangeable = FALSE,
		.PortPinInputPullResistor = PORT_PIN_IN_NO_PULL
	},
	{	/*Instance_25*/
		.PortPinDirection = DEFAULT_PARAMETER_ENUM_VALUE,
		.PortPinDirectionChangeable = FALSE,
		.PortPinId = 26,
		.PortPinInitialMode = DEFAULT_PARAMETER_ENUM_VALUE,
		.PortPinLevelValue = DEFAULT_PARAMETER_ENUM_VALUE,
		.PortPinMode = DEFAULT_PARAMETER_ENUM_VALUE,
		.PortPinModeChangeable = FALSE,
		.PortPinInputPullResistor = PORT_PIN_IN_NO_PULL
	},
	{	/*Instance_26*/
		.PortPinDirection = DEFAULT_PARAMETER_ENUM_VALUE,
		.PortPinDirectionChangeable = FALSE,
		.PortPinId = 27,
		.PortPinInitialMode = DEFAULT_PARAMETER_ENUM_VALUE,
		.PortPinLevelValue = DEFAULT_PARAMETER_ENUM_VALUE,
		.PortPinMode = DEFAULT_PARAMETER_ENUM_VALUE,
		.PortPinModeChangeable = FALSE,
		.PortPinInputPullResistor = PORT_PIN_IN_NO_PULL
	},
	{	/*Instance_27*/
		.PortPinDirection = DEFAULT_PARAMETER_ENUM_VALUE,
		.PortPinDirectionChangeable = FALSE,
		.PortPinId = 28,
		.PortPinInitialMode = DEFAULT_PARAMETER_ENUM_VALUE,
		.PortPinLevelValue = DEFAULT_PARAMETER_ENUM_VALUE,
		.PortPinMode = DEFAULT_PARAMETER_ENUM_VALUE,
		.PortPinModeChangeable = FALSE,
		.PortPinInputPullResistor = PORT_PIN_IN_NO_PULL
	},
	{	/*Instance_28*/
		.PortPinDirection = DEFAULT_PARAMETER_ENUM_VALUE,
		.PortPinDirectionChangeable = FALSE,
		.PortPinId = 29,
		.PortPinInitialMode = DEFAULT_PARAMETER_ENUM_VALUE,
		.PortPinLevelValue = DEFAULT_PARAMETER_ENUM_VALUE,
		.PortPinMode = DEFAULT_PARAMETER_ENUM_VALUE,
		.PortPinModeChangeable = FALSE,
		.PortPinInputPullResistor = PORT_PIN_IN_NO_PULL
	},
	{	/*Instance_29*/
		.PortPinDirection = DEFAULT_PARAMETER_ENUM_VALUE,
		.PortPinDirectionChangeable = FALSE,
		.PortPinId = 30,
		.PortPinInitialMode = DEFAULT_PARAMETER_ENUM_VALUE,
		.PortPinLevelValue = DEFAULT_PARAMETER_ENUM_VALUE,
		.PortPinMode = DEFAULT_PARAMETER_ENUM_VALUE,
		.PortPinModeChangeable = FALSE,
		.PortPinInputPullResistor = PORT_PIN_IN_NO_PULL
	},
	{	/*Instance_30*/
		.PortPinDirection = DEFAULT_PARAMETER_ENUM_VALUE,
		.PortPinDirectionChangeable = FALSE,
		.PortPinId = 31,
		.PortPinInitialMode = DEFAULT_PARAMETER_ENUM_VALUE,
		.PortPinLevelValue = DEFAULT_PARAMETER_ENUM_VALUE,
		.PortPinMode = DEFAULT_PARAMETER_ENUM_VALUE,
		.PortPinModeChangeable = FALSE,
		.PortPinInputPullResistor = PORT_PIN_IN_NO_PULL
	},
	{	/*Instance_31*/
		.PortPinDirection = DEFAULT_PARAMETER_ENUM_VALUE,
		.PortPinDirectionChangeable = FALSE,
		.PortPinId = 32,
		.PortPinInitialMode = DEFAULT_PARAMETER_ENUM_VALUE,
		.PortPinLevelValue = DEFAULT_PARAMETER_ENUM_VALUE,
		.PortPinMode = DEFAULT_PARAMETER_ENUM_VALUE,
		.PortPinModeChangeable = FALSE,
		.PortPinInputPullResistor = PORT_PIN_IN_NO_PULL
	},
	{	/*Instance_32*/
		.PortPinDirection = DEFAULT_PARAMETER_ENUM_VALUE,
		.PortPinDirectionChangeable = FALSE,
		.PortPinId = 33,
		.PortPinInitialMode = DEFAULT_PARAMETER_ENUM_VALUE,
		.PortPinLevelValue = DEFAULT_PARAMETER_ENUM_VALUE,
		.PortPinMode = DEFAULT_PARAMETER_ENUM_VALUE,
		.PortPinModeChangeable = FALSE,
		.PortPinInputPullResistor = PORT_PIN_IN_NO_PULL
	},
	{	/*Instance_33*/
		.PortPinDirection = DEFAULT_PARAMETER_ENUM_VALUE,
		.PortPinDirectionChangeable = FALSE,
		.PortPinId = 34,
		.PortPinInitialMode = DEFAULT_PARAMETER_ENUM_VALUE,
		.PortPinLevelValue = DEFAULT_PARAMETER_ENUM_VALUE,
		.PortPinMode = DEFAULT_PARAMETER_ENUM_VALUE,
		.PortPinModeChangeable = FALSE,
		.PortPinInputPullResistor = PORT_PIN_IN_NO_PULL
	},
	{	/*Instance_34*/
		.PortPinDirection = DEFAULT_PARAMETER_ENUM_VALUE,
		.PortPinDirectionChangeable = FALSE,
		.PortPinId = 35,
		.PortPinInitialMode = DEFAULT_PARAMETER_ENUM_VALUE,
		.PortPinLevelValue = DEFAULT_PARAMETER_ENUM_VALUE,
		.PortPinMode = DEFAULT_PARAMETER_ENUM_VALUE,
		.PortPinModeChangeable = FALSE,
		.PortPinInputPullResistor = PORT_PIN_IN_NO_PULL
	},
	{	/*Instance_35*/
		.PortPinDirection = DEFAULT_PARAMETER_ENUM_VALUE,
		.PortPinDirectionChangeable = FALSE,
		.PortPinId = 36,
		.PortPinInitialMode = DEFAULT_PARAMETER_ENUM_VALUE,
		.PortPinLevelValue = DEFAULT_PARAMETER_ENUM_VALUE,
		.PortPinMode = DEFAULT_PARAMETER_ENUM_VALUE,
		.PortPinModeChangeable = FALSE,
		.PortPinInputPullResistor = PORT_PIN_IN_NO_PULL
	},
	{	/*Instance_36*/
		.PortPinDirection = DEFAULT_PARAMETER_ENUM_VALUE,
		.PortPinDirectionChangeable = FALSE,
		.PortPinId = 37,
		.PortPinInitialMode = DEFAULT_PARAMETER_ENUM_VALUE,
		.PortPinLevelValue = DEFAULT_PARAMETER_ENUM_VALUE,
		.PortPinMode = DEFAULT_PARAMETER_ENUM_VALUE,
		.PortPinModeChangeable = FALSE,
		.PortPinInputPullResistor = PORT_PIN_IN_NO_PULL
	},
	{	/*Instance_37*/
		.PortPinDirection = DEFAULT_PARAMETER_ENUM_VALUE,
		.PortPinDirectionChangeable = FALSE,
		.PortPinId = 38,
		.PortPinInitialMode = DEFAULT_PARAMETER_ENUM_VALUE,
		.PortPinLevelValue = DEFAULT_PARAMETER_ENUM_VALUE,
		.PortPinMode = DEFAULT_PARAMETER_ENUM_VALUE,
		.PortPinModeChangeable = FALSE,
		.PortPinInputPullResistor = PORT_PIN_IN_NO_PULL
	},
	{	/*Instance_38*/
		.PortPinDirection = DEFAULT_PARAMETER_ENUM_VALUE,
		.PortPinDirectionChangeable = FALSE,
		.PortPinId = 39,
		.PortPinInitialMode = DEFAULT_PARAMETER_ENUM_VALUE,
		.PortPinLevelValue = DEFAULT_PARAMETER_ENUM_VALUE,
		.PortPinMode = DEFAULT_PARAMETER_ENUM_VALUE,
		.PortPinModeChangeable = FALSE,
		.PortPinInputPullResistor = PORT_PIN_IN_NO_PULL
	},
	{	/*Instance_39*/
		.PortPinDirection = DEFAULT_PARAMETER_ENUM_VALUE,
		.PortPinDirectionChangeable = FALSE,
		.PortPinId = 40,
		.PortPinInitialMode = DEFAULT_PARAMETER_ENUM_VALUE,
		.PortPinLevelValue = DEFAULT_PARAMETER_ENUM_VALUE,
		.PortPinMode = DEFAULT_PARAMETER_ENUM_VALUE,
		.PortPinModeChangeable = FALSE,
		.PortPinInputPullResistor = PORT_PIN_IN_NO_PULL
	},
	{	/*Instance_40*/
		.PortPinDirection = PORT_PIN_IN,
		.PortPinDirectionChangeable = FALSE,
		.PortPinId = 41,
		.PortPinInitialMode = PORT_PIN_MODE_DIO,
		.PortPinLevelValue = PORT_PIN_LEVEL_HIGH,
		.PortPinMode = PORT_PIN_MODE_DIO,
		.PortPinModeChangeable = FALSE,
		.PortPinInputPullResistor = PORT_PIN_IN_PULL_UP
	},
	{	/*Instance_41*/
		.PortPinDirection = PORT_PIN_OUT,
		.PortPinDirectionChangeable = FALSE,
		.PortPinId = 42,
		.PortPinInitialMode = PORT_PIN_MODE_DIO,
		.PortPinLevelValue = PORT_PIN_LEVEL_LOW,
		.PortPinMode = PORT_PIN_MODE_DIO,
		.PortPinModeChangeable = FALSE,
		.PortPinInputPullResistor = PORT_PIN_IN_NO_PULL
	},
	{	/*Instance_42*/
		.PortPinDirection = PORT_PIN_OUT,
		.PortPinDirectionChangeable = FALSE,
		.PortPinId = 43,
		.PortPinInitialMode = PORT_PIN_MODE_DIO,
		.PortPinLevelValue = PORT_PIN_LEVEL_LOW,
		.PortPinMode = PORT_PIN_MODE_DIO,
		.PortPinModeChangeable = FALSE,
		.PortPinInputPullResistor = PORT_PIN_IN_NO_PULL
	},
	{	/*Instance_43*/
		.PortPinDirection = PORT_PIN_OUT,
		.PortPinDirectionChangeable = FALSE,
		.PortPinId = 44,
		.PortPinInitialMode = PORT_PIN_MODE_DIO,
		.PortPinLevelValue = PORT_PIN_LEVEL_LOW,
		.PortPinMode = PORT_PIN_MODE_DIO,
		.PortPinModeChangeable = FALSE,
		.PortPinInputPullResistor = PORT_PIN_IN_NO_PULL
	},
	{	/*Instance_44*/
		.PortPinDirection = PORT_PIN_IN,
		.PortPinDirectionChangeable = FALSE,
		.PortPinId = 45,
		.PortPinInitialMode = PORT_PIN_MODE_DIO,
		.PortPinLevelValue = PORT_PIN_LEVEL_HIGH,
		.PortPinMode = PORT_PIN_MODE_DIO,
		.PortPinModeChangeable = FALSE,
		.PortPinInputPullResistor = PORT_PIN_IN_PULL_UP
	},
	{	/*Instance_45*/
		.PortPinDirection = DEFAULT_PARAMETER_ENUM_VALUE,
		.PortPinDirectionChangeable = FALSE,
		.PortPinId = 46,
		.PortPinInitialMode = DEFAULT_PARAMETER_ENUM_VALUE,
		.PortPinLevelValue = DEFAULT_PARAMETER_ENUM_VALUE,
		.PortPinMode = DEFAULT_PARAMETER_ENUM_VALUE,
		.PortPinModeChangeable = FALSE,
		.PortPinInputPullResistor = PORT_PIN_IN_NO_PULL
	},
	{	/*Instance_46*/
		.PortPinDirection = DEFAULT_PARAMETER_ENUM_VALUE,
		.PortPinDirectionChangeable = FALSE,
		.PortPinId = 47,
		.PortPinInitialMode = DEFAULT_PARAMETER_ENUM_VALUE,
		.PortPinLevelValue = DEFAULT_PARAMETER_ENUM_VALUE,
		.PortPinMode = DEFAULT_PARAMETER_ENUM_VALUE,
		.PortPinModeChangeable = FALSE,
		.PortPinInputPullResistor = PORT_PIN_IN_NO_PULL
	},
	{	/*Instance_47*/
		.PortPinDirection = DEFAULT_PARAMETER_ENUM_VALUE,
		.PortPinDirectionChangeable = FALSE,
		.PortPinId = 48,
		.PortPinInitialMode = DEFAULT_PARAMETER_ENUM_VALUE,
		.PortPinLevelValue = DEFAULT_PARAMETER_ENUM_VALUE,
		.PortPinMode = DEFAULT_PARAMETER_ENUM_VALUE,
		.PortPinModeChangeable = FALSE,
		.PortPinInputPullResistor = PORT_PIN_IN_NO_PULL
	}
};

