#include "Dio.h"
#include "E:\Embedded\Tasks\TrainingProject4\tm4c123gh6pm.h"
#include <stdint.h>
////////////////////////////////////////////////// Dio_ReadChannel //////////////////////////////////////////////////
Dio_LevelType Dio_ReadChannel(Dio_ChannelType ChannelId)
{
    volatile uint32_t * Port_Ptr = NULL_PTR;
	Dio_LevelType output = STD_LOW;
	
  /* Point to the correct PORT register according to the Port Id stored in the Port_Num member */
	switch(Dio_PortChannels[ChannelId].Port_Num)
		{
            case 0:
                  Port_Ptr = &GPIO_PORTA_DATA_R;
                  break;
            case 1:
                  Port_Ptr = &GPIO_PORTB_DATA_R;
                  break;
            case 2:
                  Port_Ptr = &GPIO_PORTC_DATA_R;
                  break;
            case 3:
                  Port_Ptr = &GPIO_PORTD_DATA_R;
                  break;
            case 4:
                  Port_Ptr = &GPIO_PORTE_DATA_R;
                  break;
            case 5:
                  Port_Ptr = &GPIO_PORTF_DATA_R;
                  break;
		}
		/* Read the required channel */
		if(BIT_IS_SET(*Port_Ptr,Dio_PortChannels[ChannelId].Ch_Num))
		{
			output = STD_HIGH;
		}
		else
		{
			output = STD_LOW;
		}


		return output;
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////// Dio_WriteChannel //////////////////////////////////////////////////
void Dio_WriteChannel(Dio_ChannelType ChannelId, Dio_LevelType Level){

    volatile uint32_t * Port_Ptr = NULL_PTR;

    /* Point to the correct PORT register according to the Port Id stored in the Port_Num member */
		switch(Dio_PortChannels[ChannelId].Port_Num)
		{
                  
            case 0:
                  Port_Ptr = &GPIO_PORTA_DATA_R;
                  break;
            case 1:
                  Port_Ptr = &GPIO_PORTB_DATA_R;
                  break;
            case 2:
                  Port_Ptr = &GPIO_PORTC_DATA_R;
                  break;
            case 3:
                  Port_Ptr = &GPIO_PORTD_DATA_R;
                  break;
            case 4:
                  Port_Ptr = &GPIO_PORTE_DATA_R;
                  break;
            case 5:
                  Port_Ptr = &GPIO_PORTF_DATA_R;
                  break;
		}
		if(Level == STD_HIGH)
		{
			/* Write Logic High */
			SET_BIT(*Port_Ptr,Dio_PortChannels[ChannelId].Ch_Num);
		}
		else if(Level == STD_LOW)
		{
			/* Write Logic Low */
			CLEAR_BIT(*Port_Ptr,Dio_PortChannels[ChannelId].Ch_Num);
		}

}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////// Dio_Init ////////////////////////////////////////////////////////
void Dio_Init(const Dio_ConfigType * ConfigPtr)
{
		/*
		 * Set the module state to initialized and point to the PB configuration structure using a global pointer.
		 * This global pointer is global to be used by other functions to read the PB configuration structures
		 */
              
		Dio_Status       = DIO_INITIALIZED;
		Dio_PortChannels = ConfigPtr->Channels; /*address of the first Channels structure --> Channels[0] */
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////// Dio_ReadPort ////////////////////////////////////////////////////////
Dio_PortLevelType Dio_ReadPort(Dio_PortType PortId) {

    Dio_PortLevelType output = STD_LOW;
     volatile uint32_t * Port_Ptr = NULL_PTR;

    switch(PortId)
    {
        case 0:
            Port_Ptr = &GPIO_PORTA_DATA_R;
            break;
        case 1:
            Port_Ptr = &GPIO_PORTB_DATA_R;
            break;
        case 2:
            Port_Ptr = &GPIO_PORTC_DATA_R;
            break;
        case 3:
            Port_Ptr = &GPIO_PORTD_DATA_R;
            break;
        case 4:
            Port_Ptr = &GPIO_PORTE_DATA_R;
            break;
        case 5:
            Port_Ptr = &GPIO_PORTF_DATA_R;
            break;
    }
    output = *Port_Ptr;
    return output;
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////// Dio_WritePort ////////////////////////////////////////////////////
void Dio_WritePort(Dio_PortType PortId,Dio_PortLevelType Level){

    volatile uint32_t * Port_Ptr = NULL_PTR;
    switch(PortId)
    {
        case 0:
            Port_Ptr = &GPIO_PORTA_DATA_R;
            break;
        case 1:
            Port_Ptr = &GPIO_PORTB_DATA_R;
            break;
        case 2:
            Port_Ptr = &GPIO_PORTC_DATA_R;
            break;
        case 3:
            Port_Ptr = &GPIO_PORTD_DATA_R;
            break;
        case 4:
            Port_Ptr = &GPIO_PORTE_DATA_R;
            break;
        case 5:
            Port_Ptr = &GPIO_PORTF_DATA_R;
    }
    *Port_Ptr = Level;

}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


Dio_LevelType Dio_FlipChannel (Dio_ChannelType ChannelId)
{
  
}


void Dio_MaskedWritePort(Dio_PortType PortId,Dio_PortLevelType Level,Dio_PortLevelType Mask)
{
  
}


Dio_PortLevelType Dio_ReadChannelGroup (const Dio_ChannelGroupType* ChannelGroupIdPtr)
{
  
}

void Dio_WriteChannelGroup (const Dio_ChannelGroupType* ChannelGroupIdPtr,Dio_PortLevelType Level)
{
  
}

