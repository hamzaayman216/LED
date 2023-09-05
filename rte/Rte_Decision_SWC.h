
#ifndef RTE_DECISION_SWC_H_
#define RTE_DECISION_SWC_H_


#include "Rte.h"


extern void CDD_SWC_1_Runnable_update_2(variable_new_led write_in_client_server_Operation_updateLED_Argument_1);


#define    Rte_Call_client_update_LED_port_write_in_client_server_Operation_updateLED(write_in_client_server_Operation_updateLED_Argument_1)     (CDD_SWC_1_Runnable_update_2(write_in_client_server_Operation_updateLED_Argument_1))
#define    Rte_IRead_Decision_SWC_Runnable_1_receiver_sendOrder_Element_1_isClockWise (&data)     (Rte_IRead_sendOrder_Element_1_isClockWise_decision_application_swc_composition_receiver_Decision_SWC_Runnable_1 (&data))



#endif
