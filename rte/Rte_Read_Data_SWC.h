#ifndef RTE_READ_DATA_SWC_H_
#define RTE_READ_DATA_SWC_H_


#include "Rte.h"


extern void CDD_SWC_1_Runnable_read_1(variable_readData* read_from_Client_Server_Operation_read_Argument_1);


#define    Rte_Write_sender_sendOrder_Element_1_isClockWise(data)     (Rte_Write_read_application_swc_composition_sender_sendOrder_Element_1_isClockWise(data))
#define    Rte_Write_sender_sendOrder_Element_2_readData(data)     (Rte_Write_read_application_swc_composition_sender_sendOrder_Element_2_readData(data))
#define    Rte_Call_client_read_data_port_read_from_Client_Server_Operation_read(read_from_Client_Server_Operation_read_Argument_1)     (CDD_SWC_1_Runnable_read_1(read_from_Client_Server_Operation_read_Argument_1))



#endif
