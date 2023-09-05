

#ifndef DIO_LCFG_H
#define DIO_LCFG_H



/******************************************************************************************
****************************************Dio Module****************************************
*********************************Link-Time Configurations*********************************
******************************************************************************************/


/*
* Dio_LCfg_H
* 	File's Includes
*/
//#include "E:\Embedded\Tasks\TrainingProject3\bsw\Dio_Types.h"

#include "Dio_Types.h"


/******************************************************************************************
***************************************Dio Module's***************************************
****************************************Structures****************************************
******************************************************************************************/


/*
* DioPort Container
*  Macro Configurations
*/
#define DIO_PORT_SIZE                                 (6U)

/* Container Instance 0*/
#define DIO_PORT_ID_0                                 (0U)
#define DIO_CHANNEL_0_STARTING_INDEX                  (0U)
#define DIO_CHANNEL_0_NUMBER_INSTANCES                (8U)

/* Container Instance 1*/
#define DIO_PORT_ID_1                                 (1U)
#define DIO_CHANNEL_1_STARTING_INDEX                  (8U)
#define DIO_CHANNEL_1_NUMBER_INSTANCES                (8U)

/* Container Instance 2*/
#define DIO_PORT_ID_2                                 (2U)
#define DIO_CHANNEL_2_STARTING_INDEX                  (16U)
#define DIO_CHANNEL_2_NUMBER_INSTANCES                (8U)

/* Container Instance 3*/
#define DIO_PORT_ID_3                                 (3U)
#define DIO_CHANNEL_3_STARTING_INDEX                  (24U)
#define DIO_CHANNEL_3_NUMBER_INSTANCES                (8U)

/* Container Instance 4*/
#define DIO_PORT_ID_4                                 (4U)
#define DIO_CHANNEL_4_STARTING_INDEX                  (32U)
#define DIO_CHANNEL_4_NUMBER_INSTANCES                (8U)

/* Container Instance 5*/
#define DIO_PORT_ID_5                                 (5U)
#define DIO_CHANNEL_5_STARTING_INDEX                  (40U)
#define DIO_CHANNEL_5_NUMBER_INSTANCES                (8U)
#define DIO_CHANNEL_GROUP_5_STARTING_INDEX            (0U)
#define DIO_CHANNEL_GROUP_5_NUMBER_INSTANCES          (3U)


/*
* DioConfig Container
*  Macro Configurations
*/
#define DIO_CONFIG_SIZE                               (1U)

/* Container Instance 0*/
#define DIO_CONFIG_ID_0                               (0U)
#define DIO_PORT_0_STARTING_INDEX                     (0U)
#define DIO_PORT_0_NUMBER_INSTANCES                   (6U)


/*
* DioChannel Container
*  Macro Configurations
*/
#define DIO_CHANNEL_SIZE                              (48U)

/* Container Instance 0*/
#define DIO_CHANNEL_ID_0                              (0U)
/* Container Instance 1*/
#define DIO_CHANNEL_ID_1                              (1U)
/* Container Instance 2*/
#define DIO_CHANNEL_ID_2                              (2U)
/* Container Instance 3*/
#define DIO_CHANNEL_ID_3                              (3U)
/* Container Instance 4*/
#define DIO_CHANNEL_ID_4                              (4U)
/* Container Instance 5*/
#define DIO_CHANNEL_ID_5                              (5U)
/* Container Instance 6*/
#define DIO_CHANNEL_ID_6                              (6U)
/* Container Instance 7*/
#define DIO_CHANNEL_ID_7                              (7U)
/* Container Instance 8*/
#define DIO_CHANNEL_ID_8                              (8U)
/* Container Instance 9*/
#define DIO_CHANNEL_ID_9                              (9U)
/* Container Instance 10*/
#define DIO_CHANNEL_ID_10                             (10U)
/* Container Instance 11*/
#define DIO_CHANNEL_ID_11                             (11U)
/* Container Instance 12*/
#define DIO_CHANNEL_ID_12                             (12U)
/* Container Instance 13*/
#define DIO_CHANNEL_ID_13                             (13U)
/* Container Instance 14*/
#define DIO_CHANNEL_ID_14                             (14U)
/* Container Instance 15*/
#define DIO_CHANNEL_ID_15                             (15U)
/* Container Instance 16*/
#define DIO_CHANNEL_ID_16                             (16U)
/* Container Instance 17*/
#define DIO_CHANNEL_ID_17                             (17U)
/* Container Instance 18*/
#define DIO_CHANNEL_ID_18                             (18U)
/* Container Instance 19*/
#define DIO_CHANNEL_ID_19                             (19U)
/* Container Instance 20*/
#define DIO_CHANNEL_ID_20                             (20U)
/* Container Instance 21*/
#define DIO_CHANNEL_ID_21                             (21U)
/* Container Instance 22*/
#define DIO_CHANNEL_ID_22                             (22U)
/* Container Instance 23*/
#define DIO_CHANNEL_ID_23                             (23U)
/* Container Instance 24*/
#define DIO_CHANNEL_ID_24                             (24U)
/* Container Instance 25*/
#define DIO_CHANNEL_ID_25                             (25U)
/* Container Instance 26*/
#define DIO_CHANNEL_ID_26                             (26U)
/* Container Instance 27*/
#define DIO_CHANNEL_ID_27                             (27U)
/* Container Instance 28*/
#define DIO_CHANNEL_ID_28                             (28U)
/* Container Instance 29*/
#define DIO_CHANNEL_ID_29                             (29U)
/* Container Instance 30*/
#define DIO_CHANNEL_ID_30                             (30U)
/* Container Instance 31*/
#define DIO_CHANNEL_ID_31                             (31U)
/* Container Instance 32*/
#define DIO_CHANNEL_ID_32                             (32U)
/* Container Instance 33*/
#define DIO_CHANNEL_ID_33                             (33U)
/* Container Instance 34*/
#define DIO_CHANNEL_ID_34                             (34U)
/* Container Instance 35*/
#define DIO_CHANNEL_ID_35                             (35U)
/* Container Instance 36*/
#define DIO_CHANNEL_ID_36                             (36U)
/* Container Instance 37*/
#define DIO_CHANNEL_ID_37                             (37U)
/* Container Instance 38*/
#define DIO_CHANNEL_ID_38                             (38U)
/* Container Instance 39*/
#define DIO_CHANNEL_ID_39                             (39U)
/* Container Instance 40*/
#define DIO_CHANNEL_ID_40                             (40U)
/* Container Instance 41*/
#define DIO_CHANNEL_ID_41                             (41U)
/* Container Instance 42*/
#define DIO_CHANNEL_ID_42                             (42U)
/* Container Instance 43*/
#define DIO_CHANNEL_ID_43                             (43U)
/* Container Instance 44*/
#define DIO_CHANNEL_ID_44                             (44U)
/* Container Instance 45*/
#define DIO_CHANNEL_ID_45                             (45U)
/* Container Instance 46*/
#define DIO_CHANNEL_ID_46                             (46U)
/* Container Instance 47*/
#define DIO_CHANNEL_ID_47                             (47U)

/*
* DioChannelGroup Container
*  Macro Configurations
*/
#define DIO_CHANNEL_GROUP_SIZE                        (3U)

/* Container Instance 0*/
#define DIO_CHANNEL_GROUP_ID_0                        (0U)
/* Container Instance 1*/
#define DIO_CHANNEL_GROUP_ID_1                        (1U)
/* Container Instance 2*/
#define DIO_CHANNEL_GROUP_ID_2                        (2U)

/*DioChannelGroupIdentification: DioChannelGroup_0*/
#define DIO_CONF_DIO_CHANNEL_GROUP_0			((Dio_ChannelGroupType*)(&(DioChannelGroup[DIO_CHANNEL_GROUP_ID_0])))
/*DioChannelGroupIdentification: DioChannelGroup_1*/
#define DIO_CONF_DIO_CHANNEL_GROUP_1			((Dio_ChannelGroupType*)(&(DioChannelGroup[DIO_CHANNEL_GROUP_ID_1])))
/*DioChannelGroupIdentification: DioChannelGroup_2*/
#define DIO_CONF_DIO_CHANNEL_GROUP_2			((Dio_ChannelGroupType*)(&(DioChannelGroup[DIO_CHANNEL_GROUP_ID_2])))




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
***************************************Dio Module's***************************************
*************************************Structures Arrays*************************************
******************************************Extern******************************************
******************************************************************************************/


/*
* DioPort Container
* 	Extern Array Of Structures
*/
extern DioPort_s DioPort[DIO_PORT_SIZE];

/*
* DioConfig Container
* 	Extern Array Of Structures
*/
extern DioConfig_s DioConfig[DIO_CONFIG_SIZE];

/*
* DioChannel Container
* 	Extern Array Of Structures
*/
extern DioChannel_s DioChannel[DIO_CHANNEL_SIZE];

/*
* DioChannelGroup Container
* 	Extern Array Of Structures
*/
extern DioChannelGroup_s DioChannelGroup[DIO_CHANNEL_GROUP_SIZE];




/******************************************************************************************
***************************************Dio Module's***************************************
*************************************Structures Sizes*************************************
******************************************Extern******************************************
******************************************************************************************/


/*
* DioPort Container
* 	Extern Size Variable
*/
extern uint8 lcfg_DioPort_size;

/*
* DioConfig Container
* 	Extern Size Variable
*/
extern uint8 lcfg_DioConfig_size;

/*
* DioChannel Container
* 	Extern Size Variable
*/
extern uint8 lcfg_DioChannel_size;

/*
* DioChannelGroup Container
* 	Extern Size Variable
*/
extern uint8 lcfg_DioChannelGroup_size;







/******************************************************************************************
***************************************Dio Module's***************************************
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