

/******************************************************************************************
****************************************Dio Module****************************************
*********************************Link-Time Configurations*********************************
******************************************************************************************/





#include "E:\Embedded\Tasks\TrainingProject3\bsw\Dio_LCfg.h"




/******************************************************************************************
*************************************DioPort Container*************************************
*******************************Size And Array Of Structures*******************************
**********************************Linking Configurations **********************************
******************************************************************************************/


/* Size Variable Linking Configuration*/
uint8 lcfg_DioPort_size = DIO_PORT_SIZE;

/* Array Of Structures Linking Configurations*/

DioPort_s DioPort[DIO_PORT_SIZE] =
{
	{	/*Instance_0*/
		.DioPortId = 0,
		.DioChannel_startingIndex = DIO_CHANNEL_0_STARTING_INDEX,
		.DioChannel_numberOfInstances = DIO_CHANNEL_0_NUMBER_INSTANCES,
		.DioChannelGroup_startingIndex = DEFAULT_CONTAINER_STARTING_VALUE,
		.DioChannelGroup_numberOfInstances = DEFAULT_CONTAINER_NUMBER_INSTANCES
	},
	{	/*Instance_1*/
		.DioPortId = 1,
		.DioChannel_startingIndex = DIO_CHANNEL_1_STARTING_INDEX,
		.DioChannel_numberOfInstances = DIO_CHANNEL_1_NUMBER_INSTANCES,
		.DioChannelGroup_startingIndex = DEFAULT_CONTAINER_STARTING_VALUE,
		.DioChannelGroup_numberOfInstances = DEFAULT_CONTAINER_NUMBER_INSTANCES
	},
	{	/*Instance_2*/
		.DioPortId = DEFAULT_PARAMETER_32BIT_VALUE,
		.DioChannel_startingIndex = DIO_CHANNEL_2_STARTING_INDEX,
		.DioChannel_numberOfInstances = DIO_CHANNEL_2_NUMBER_INSTANCES,
		.DioChannelGroup_startingIndex = DEFAULT_CONTAINER_STARTING_VALUE,
		.DioChannelGroup_numberOfInstances = DEFAULT_CONTAINER_NUMBER_INSTANCES
	},
	{	/*Instance_3*/
		.DioPortId = 3,
		.DioChannel_startingIndex = DIO_CHANNEL_3_STARTING_INDEX,
		.DioChannel_numberOfInstances = DIO_CHANNEL_3_NUMBER_INSTANCES,
		.DioChannelGroup_startingIndex = DEFAULT_CONTAINER_STARTING_VALUE,
		.DioChannelGroup_numberOfInstances = DEFAULT_CONTAINER_NUMBER_INSTANCES
	},
	{	/*Instance_4*/
		.DioPortId = 4,
		.DioChannel_startingIndex = DIO_CHANNEL_4_STARTING_INDEX,
		.DioChannel_numberOfInstances = DIO_CHANNEL_4_NUMBER_INSTANCES,
		.DioChannelGroup_startingIndex = DEFAULT_CONTAINER_STARTING_VALUE,
		.DioChannelGroup_numberOfInstances = DEFAULT_CONTAINER_NUMBER_INSTANCES
	},
	{	/*Instance_5*/
		.DioPortId = 5,
		.DioChannel_startingIndex = DIO_CHANNEL_5_STARTING_INDEX,
		.DioChannel_numberOfInstances = DIO_CHANNEL_5_NUMBER_INSTANCES,
		.DioChannelGroup_startingIndex = DIO_CHANNEL_GROUP_5_STARTING_INDEX,
		.DioChannelGroup_numberOfInstances = DIO_CHANNEL_GROUP_5_NUMBER_INSTANCES
	}
};
/******************************************************************************************
************************************DioConfig Container************************************
*******************************Size And Array Of Structures*******************************
**********************************Linking Configurations **********************************
******************************************************************************************/

/* Size Variable Linking Configuration*/
uint8 lcfg_DioConfig_size = DIO_CONFIG_SIZE;

/* Array Of Structures Linking Configurations*/
DioConfig_s DioConfig[DIO_CONFIG_SIZE] =
{
	{	/*Instance_0*/
		.DioPort_startingIndex = DIO_PORT_0_STARTING_INDEX,
		.DioPort_numberOfInstances = DIO_PORT_0_NUMBER_INSTANCES
	}
};
/******************************************************************************************
***********************************DioChannel Container***********************************
*******************************Size And Array Of Structures*******************************
**********************************Linking Configurations **********************************
******************************************************************************************/

/* Size Variable Linking Configuration*/
uint8 lcfg_DioChannel_size = DIO_CHANNEL_SIZE;

/* Array Of Structures Linking Configurations*/
DioChannel_s DioChannel[DIO_CHANNEL_SIZE] =
{
	{	/*Instance_0*/
		.DioChannelId = 0
	},
	{	/*Instance_1*/
		.DioChannelId = 1
	},
	{	/*Instance_2*/
		.DioChannelId = 2
	},
	{	/*Instance_3*/
		.DioChannelId = 3
	},
	{	/*Instance_4*/
		.DioChannelId = 4
	},
	{	/*Instance_5*/
		.DioChannelId = 5
	},
	{	/*Instance_6*/
		.DioChannelId = 6
	},
	{	/*Instance_7*/
		.DioChannelId = 7
	},
	{	/*Instance_8*/
		.DioChannelId = 0
	},
	{	/*Instance_9*/
		.DioChannelId = 1
	},
	{	/*Instance_10*/
		.DioChannelId = 2
	},
	{	/*Instance_11*/
		.DioChannelId = 3
	},
	{	/*Instance_12*/
		.DioChannelId = 4
	},
	{	/*Instance_13*/
		.DioChannelId = 5
	},
	{	/*Instance_14*/
		.DioChannelId = 6
	},
	{	/*Instance_15*/
		.DioChannelId = 7
	},
	{	/*Instance_16*/
		.DioChannelId = 0
	},
	{	/*Instance_17*/
		.DioChannelId = 1
	},
	{	/*Instance_18*/
		.DioChannelId = 2
	},
	{	/*Instance_19*/
		.DioChannelId = 3
	},
	{	/*Instance_20*/
		.DioChannelId = 4
	},
	{	/*Instance_21*/
		.DioChannelId = 5
	},
	{	/*Instance_22*/
		.DioChannelId = 6
	},
	{	/*Instance_23*/
		.DioChannelId = 7
	},
	{	/*Instance_24*/
		.DioChannelId = 0
	},
	{	/*Instance_25*/
		.DioChannelId = 1
	},
	{	/*Instance_26*/
		.DioChannelId = 2
	},
	{	/*Instance_27*/
		.DioChannelId = 3
	},
	{	/*Instance_28*/
		.DioChannelId = 4
	},
	{	/*Instance_29*/
		.DioChannelId = 5
	},
	{	/*Instance_30*/
		.DioChannelId = 6
	},
	{	/*Instance_31*/
		.DioChannelId = 7
	},
	{	/*Instance_32*/
		.DioChannelId = 0
	},
	{	/*Instance_33*/
		.DioChannelId = 1
	},
	{	/*Instance_34*/
		.DioChannelId = 2
	},
	{	/*Instance_35*/
		.DioChannelId = 3
	},
	{	/*Instance_36*/
		.DioChannelId = 4
	},
	{	/*Instance_37*/
		.DioChannelId = 5
	},
	{	/*Instance_38*/
		.DioChannelId = 6
	},
	{	/*Instance_39*/
		.DioChannelId = 7
	},
	{	/*Instance_40*/
		.DioChannelId = 0
	},
	{	/*Instance_41*/
		.DioChannelId = 1
	},
	{	/*Instance_42*/
		.DioChannelId = 2
	},
	{	/*Instance_43*/
		.DioChannelId = 3
	},
	{	/*Instance_44*/
		.DioChannelId = 4
	},
	{	/*Instance_45*/
		.DioChannelId = 5
	},
	{	/*Instance_46*/
		.DioChannelId = 6
	},
	{	/*Instance_47*/
		.DioChannelId = 7
	}
};
/******************************************************************************************
*********************************DioChannelGroup Container*********************************
*******************************Size And Array Of Structures*******************************
**********************************Linking Configurations **********************************
******************************************************************************************/

/* Size Variable Linking Configuration*/
uint8 lcfg_DioChannelGroup_size = DIO_CHANNEL_GROUP_SIZE;

/* Array Of Structures Linking Configurations*/
DioChannelGroup_s DioChannelGroup[DIO_CHANNEL_GROUP_SIZE] =
{
	{	/*Instance_0*/
		.DioPortMask = 0x01,
		.DioPortOffset = 0,
		.DioPortId = 5
	},
	{	/*Instance_1*/
		.DioPortMask = 0x0E,
		.DioPortOffset = 1,
		.DioPortId = 5
	},
	{	/*Instance_2*/
		.DioPortMask = 0x10,
		.DioPortOffset = 4,
		.DioPortId = 5
	}
};