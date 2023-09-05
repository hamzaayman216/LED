

#ifndef PORT_LCFG_H
#define PORT_LCFG_H



/******************************************************************************************
****************************************Port Module****************************************
*********************************Link-Time Configurations*********************************
******************************************************************************************/


/*
* Port_LCfg_H
* 	File's Includes
*/
#include "E:\Embedded\Tasks\TrainingProject3\bsw\Port_Types.h"


/******************************************************************************************
***************************************Port Module's***************************************
****************************************Structures****************************************
******************************************************************************************/


/*
* PortConfigSet Container
*  Macro Configurations
*/
#define PORT_CONFIG_SET_SIZE                       (1U)

/* Container Instance 0*/
#define PORT_CONFIG_SET_ID_0                       (0U)
#define PORT_CONTAINER_0_STARTING_INDEX            (0U)
#define PORT_CONTAINER_0_NUMBER_INSTANCES          (6U)


/*
* PortContainer Container
*  Macro Configurations
*/
#define PORT_CONTAINER_SIZE                        (6U)

/* Container Instance 0*/
#define PORT_CONTAINER_ID_0                        (0U)
#define PORT_PIN_0_STARTING_INDEX                  (0U)
#define PORT_PIN_0_NUMBER_INSTANCES                (8U)

/* Container Instance 1*/
#define PORT_CONTAINER_ID_1                        (1U)
#define PORT_PIN_1_STARTING_INDEX                  (8U)
#define PORT_PIN_1_NUMBER_INSTANCES                (8U)

/* Container Instance 2*/
#define PORT_CONTAINER_ID_2                        (2U)
#define PORT_PIN_2_STARTING_INDEX                  (16U)
#define PORT_PIN_2_NUMBER_INSTANCES                (8U)

/* Container Instance 3*/
#define PORT_CONTAINER_ID_3                        (3U)
#define PORT_PIN_3_STARTING_INDEX                  (24U)
#define PORT_PIN_3_NUMBER_INSTANCES                (8U)

/* Container Instance 4*/
#define PORT_CONTAINER_ID_4                        (4U)
#define PORT_PIN_4_STARTING_INDEX                  (32U)
#define PORT_PIN_4_NUMBER_INSTANCES                (8U)

/* Container Instance 5*/
#define PORT_CONTAINER_ID_5                        (5U)
#define PORT_PIN_5_STARTING_INDEX                  (40U)
#define PORT_PIN_5_NUMBER_INSTANCES                (8U)


/*
* PortPin Container
*  Macro Configurations
*/
#define PORT_PIN_SIZE                              (48U)

/* Container Instance 0*/
#define PORT_PIN_ID_0                              (0U)
/* Container Instance 1*/
#define PORT_PIN_ID_1                              (1U)
/* Container Instance 2*/
#define PORT_PIN_ID_2                              (2U)
/* Container Instance 3*/
#define PORT_PIN_ID_3                              (3U)
/* Container Instance 4*/
#define PORT_PIN_ID_4                              (4U)
/* Container Instance 5*/
#define PORT_PIN_ID_5                              (5U)
/* Container Instance 6*/
#define PORT_PIN_ID_6                              (6U)
/* Container Instance 7*/
#define PORT_PIN_ID_7                              (7U)
/* Container Instance 8*/
#define PORT_PIN_ID_8                              (8U)
/* Container Instance 9*/
#define PORT_PIN_ID_9                              (9U)
/* Container Instance 10*/
#define PORT_PIN_ID_10                             (10U)
/* Container Instance 11*/
#define PORT_PIN_ID_11                             (11U)
/* Container Instance 12*/
#define PORT_PIN_ID_12                             (12U)
/* Container Instance 13*/
#define PORT_PIN_ID_13                             (13U)
/* Container Instance 14*/
#define PORT_PIN_ID_14                             (14U)
/* Container Instance 15*/
#define PORT_PIN_ID_15                             (15U)
/* Container Instance 16*/
#define PORT_PIN_ID_16                             (16U)
/* Container Instance 17*/
#define PORT_PIN_ID_17                             (17U)
/* Container Instance 18*/
#define PORT_PIN_ID_18                             (18U)
/* Container Instance 19*/
#define PORT_PIN_ID_19                             (19U)
/* Container Instance 20*/
#define PORT_PIN_ID_20                             (20U)
/* Container Instance 21*/
#define PORT_PIN_ID_21                             (21U)
/* Container Instance 22*/
#define PORT_PIN_ID_22                             (22U)
/* Container Instance 23*/
#define PORT_PIN_ID_23                             (23U)
/* Container Instance 24*/
#define PORT_PIN_ID_24                             (24U)
/* Container Instance 25*/
#define PORT_PIN_ID_25                             (25U)
/* Container Instance 26*/
#define PORT_PIN_ID_26                             (26U)
/* Container Instance 27*/
#define PORT_PIN_ID_27                             (27U)
/* Container Instance 28*/
#define PORT_PIN_ID_28                             (28U)
/* Container Instance 29*/
#define PORT_PIN_ID_29                             (29U)
/* Container Instance 30*/
#define PORT_PIN_ID_30                             (30U)
/* Container Instance 31*/
#define PORT_PIN_ID_31                             (31U)
/* Container Instance 32*/
#define PORT_PIN_ID_32                             (32U)
/* Container Instance 33*/
#define PORT_PIN_ID_33                             (33U)
/* Container Instance 34*/
#define PORT_PIN_ID_34                             (34U)
/* Container Instance 35*/
#define PORT_PIN_ID_35                             (35U)
/* Container Instance 36*/
#define PORT_PIN_ID_36                             (36U)
/* Container Instance 37*/
#define PORT_PIN_ID_37                             (37U)
/* Container Instance 38*/
#define PORT_PIN_ID_38                             (38U)
/* Container Instance 39*/
#define PORT_PIN_ID_39                             (39U)
/* Container Instance 40*/
#define PORT_PIN_ID_40                             (40U)
/* Container Instance 41*/
#define PORT_PIN_ID_41                             (41U)
/* Container Instance 42*/
#define PORT_PIN_ID_42                             (42U)
/* Container Instance 43*/
#define PORT_PIN_ID_43                             (43U)
/* Container Instance 44*/
#define PORT_PIN_ID_44                             (44U)
/* Container Instance 45*/
#define PORT_PIN_ID_45                             (45U)
/* Container Instance 46*/
#define PORT_PIN_ID_46                             (46U)
/* Container Instance 47*/
#define PORT_PIN_ID_47                             (47U)




/******************************************************************************************
**********************************User Defined Map Array**********************************
**************************************Mapping Element**************************************
******************************************************************************************/

#ifndef USER_MAP_ARRAY_ELEMENT_TYPE
#define USER_MAP_ARRAY_ELEMENT_TYPE
/* Used only in case of user defined multiple mapping*/
typedef struct
{
	uint8*	baseAddress;	/*The base address which refers to the UserMapArrayIds*/
	uint8	offset;			/*The number of mapped elements*/

}UserMapArrayElement_s;
#endif

/******************************************************************************************
***************************************Port Module's***************************************
*************************************Structures Arrays*************************************
******************************************Extern******************************************
******************************************************************************************/


/*
* PortConfigSet Container
* 	Extern Array Of Structures
*/
extern PortConfigSet_s PortConfigSet[PORT_CONFIG_SET_SIZE];

/*
* PortContainer Container
* 	Extern Array Of Structures
*/
extern PortContainer_s PortContainer[PORT_CONTAINER_SIZE];

/*
* PortPin Container
* 	Extern Array Of Structures
*/
extern PortPin_s PortPin[PORT_PIN_SIZE];




/******************************************************************************************
***************************************Port Module's***************************************
*************************************Structures Sizes*************************************
******************************************Extern******************************************
******************************************************************************************/


/*
* PortConfigSet Container
* 	Extern Size Variable
*/
extern uint8 lcfg_PortConfigSet_size;

/*
* PortContainer Container
* 	Extern Size Variable
*/
extern uint8 lcfg_PortContainer_size;

/*
* PortPin Container
* 	Extern Size Variable
*/
extern uint8 lcfg_PortPin_size;




/******************************************************************************************
***************************************Port Module's***************************************
***************************************Enumerations***************************************
******************************************************************************************/
#if 0



/*
* Type Definition
* 	Enumeration: PortPinDirection
*/
typedef enum
{

	PORT_PIN_IN,
	PORT_PIN_OUT

}PortPinDirection_e;


/*
* Type Definition
* 	Enumeration: PortPinInitialMode
*/
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

}PortPinInitialMode_e;


/*
* Type Definition
* 	Enumeration: PortPinLevelValue
*/
typedef enum
{

	PORT_PIN_LEVEL_HIGH,
	PORT_PIN_LEVEL_LOW

}PortPinLevelValue_e;


/*
* Type Definition
* 	Enumeration: PortPinMode
*/
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


/*
* Type Definition
* 	Enumeration: PortPinInputPullResistor
*/
typedef enum
{

	PORT_PIN_IN_NO_PULL,
	PORT_PIN_IN_PULL_DOWN,
	PORT_PIN_IN_PULL_UP

}PortPinInputPullResistor_e;


#endif


/******************************************************************************************
***************************************Port Module's***************************************
**************************************Default Values**************************************
******************************************************************************************/

#define DEFAULT_PARAMETER_8BIT_VALUE            (255U)
#define DEFAULT_PARAMETER_16BIT_VALUE           (65535U)
#define DEFAULT_PARAMETER_32BIT_VALUE           (4294967295U)
#define DEFAULT_PARAMETER_64BIT_VALUE           (18446744073709551615U)
#define DEFAULT_PARAMETER_BOOLEAN_VALUE         (0U)
#define DEFAULT_PARAMETER_ENUM_VALUE            (11U)
#define DEFAULT_PARAMETER_STRING_VALUE          ("\0")
#define DEFAULT_REFERENCE_TYPE                  (0U)
#define DEFAULT_REFERENCE_NUMBER_INSTANCES      (0U)
#define DEFAULT_REFERENCE_VALUE                 ((void *)0)
#define DEFAULT_PARAMETER_FUNCTION_NAME_VALUE   ((void *)0)
#define DEFAULT_CONTAINER_TYPE                  (0U)
#define DEFAULT_CONTAINER_STARTING_VALUE        (0U)
#define DEFAULT_CONTAINER_NUMBER_INSTANCES      (0U)
#define FALSE                                   (0U)
#define TRUE                                    (1U)




#endif