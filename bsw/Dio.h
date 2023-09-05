#include <stdbool.h>
#include <stdint.h>
#include "E:\Embedded\Tasks\TrainingProject\tm4c123gh6pm.h"
#include "E:\Embedded\Tasks\TrainingProject4\macros.h"


/* Pre-compile option for Development Error Detect */
#define DIO_CONFIGURED_CHANNLES              (5U)/*LED,SW*/ //Dio_Cfg.h





/* This is used to define the void pointer to zero definition */
#define NULL_PTR          ((void *)0)  //compiler.h
#define STD_ON          0x01U       /* Standard ON */  //std_types.h
#define STD_LOW         0x00U       /* Standard LOW */ //std_types.h
#define STD_HIGH         0x01U       /* Standard HIGH */ //std_types.h


typedef uint8_t Dio_PortType;  // id el ports
typedef uint8_t Dio_LevelType;  // values bt3t el DIO  (1/0)
typedef uint8_t Dio_ChannelType;   // id el channel
typedef uint32_t Dio_PortLevelType;  // values bt3t el port
typedef uint8_t Dio_ChannelGroupType;
/*
 * Macros for Dio Status
 */
#define DIO_INITIALIZED                (1U)
#define DIO_NOT_INITIALIZED            (0U)
typedef struct
{
	/* Member contains the ID of the Port that this channel belongs to */
	Dio_PortType Port_Num;
	/* Member contains the ID of the Channel*/
	Dio_ChannelType Ch_Num;
}Dio_ConfigChannel;

static const Dio_ConfigChannel * Dio_PortChannels = NULL_PTR; //ptr to a structure (port,channel)

typedef struct Dio_ConfigType
{
	Dio_ConfigChannel Channels[DIO_CONFIGURED_CHANNLES];
} Dio_ConfigType;

static uint8_t Dio_Status = DIO_NOT_INITIALIZED;


Dio_LevelType Dio_ReadChannel(Dio_ChannelType ChannelId);
void Dio_WriteChannel(Dio_ChannelType ChannelId, Dio_LevelType Level);
void Dio_Init(const Dio_ConfigType * ConfigPtr);
Dio_PortLevelType Dio_ReadPort(Dio_PortType PortId);
void Dio_WritePort(Dio_PortType PortId,Dio_PortLevelType Level);


Dio_LevelType Dio_FlipChannel (Dio_ChannelType ChannelId);

void Dio_MaskedWritePort(Dio_PortType PortId,Dio_PortLevelType Level,Dio_PortLevelType Mask);

Dio_PortLevelType Dio_ReadChannelGroup (const Dio_ChannelGroupType* ChannelGroupIdPtr);

void Dio_WriteChannelGroup (const Dio_ChannelGroupType* ChannelGroupIdPtr,Dio_PortLevelType Level);
