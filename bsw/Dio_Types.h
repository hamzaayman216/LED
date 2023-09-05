#ifndef DIO_TYPES_H_
#define DIO_TYPES_H_
#include "E:\Embedded\Tasks\TrainingProject3\rte\Std_Types.h"

//DioPort container
typedef struct
{
    uint8 DioPortId;
    uint8 DioChannel_startingIndex;
    uint8 DioChannel_numberOfInstances;
    uint8 DioChannelGroup_startingIndex;
    uint8 DioChannelGroup_numberOfInstances;
  
}DioPort_s;

typedef    signed char    koko;

typedef struct
{
    uint8 DioPort_startingIndex;
    uint8 DioPort_numberOfInstances;
}DioConfig_s;


typedef struct
{
    uint8 DioChannelId;
}DioChannel_s;


typedef struct
{
    uint8 DioPortMask;
    uint8 DioPortOffset;
    uint8 DioPortId;
}DioChannelGroup_s;

#endif