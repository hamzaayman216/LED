#include "E:\Embedded\Tasks\TrainingProject3\rte\Rte_CDD_SWC_1.h"
#include "E:\Embedded\Tasks\TrainingProject4\bsw\Port_LCfg.h"

#include "E:\Embedded\Tasks\TrainingProject4\bsw\port.h"
#include "E:\Embedded\Tasks\TrainingProject4\bsw\Dio.h"

/*
*Runnable:CDD_SWC_1_Runnable_read_1
*Event Type:operation invoked event
*DATA ACCESS:
*/
extern PortPin_s PortPin[PORT_PIN_SIZE];
void CDD_SWC_1_Runnable_read_1(variable_readData read_from_Client_Server_Operation_read_Argument_1){ 
  Port_Init(PortPin);
  read_from_Client_Server_Operation_read_Argument_1 = (uint8) Dio_ReadPort((Dio_PortType)(5));

}



/*
*Runnable:CDD_SWC_1_Runnable_update_2
*Event Type:operation invoked event
*DATA ACCESS:
*/
void CDD_SWC_1_Runnable_update_2(variable_new_led write_in_client_server_Operation_updateLED_Argument_1){
  Port_Init(PortPin);
  Dio_WritePort((Dio_PortType) 5, (Dio_PortLevelType) write_in_client_server_Operation_updateLED_Argument_1);

}


