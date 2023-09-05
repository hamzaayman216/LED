#include "E:\Embedded\Tasks\TrainingProject3\rte\Rte_Read_Data_SWC.h"
#include "E:\Embedded\Tasks\TrainingProject4\macros.h"


/*
*Runnable:Read_Data_SWC_Runnable_1
*Event Type:periodic
*DATA ACCESS:
* DATA SEND POINT:  Rte_Write_sender_sendOrder_Element_1_isClockWise(variable_isClockWise sendOrder_Element_1_isClockWise)
* DATA SEND POINT:  Rte_Write_sender_sendOrder_Element_2_readData(variable_readData sendOrder_Element_2_readData)
*/
void Read_Data_SWC_Runnable_1(void){
  variable_readData read = 0;
  Rte_Call_client_read_data_port_read_from_Client_Server_Operation_read(&read);
  variable_isClockWise sendOrder_Element_1_isClockWise = 0;
  
  variable_readData sendOrder_Element_2_readData = read;
  
  if(BIT_IS_SET(read,0))
  {
       sendOrder_Element_1_isClockWise = 1;
       CLEAR_BIT(sendOrder_Element_2_readData,0);
       CLEAR_BIT(sendOrder_Element_2_readData,4);
  }
  else if(BIT_IS_SET(read,4))
  {
       sendOrder_Element_1_isClockWise = 0;
       CLEAR_BIT(sendOrder_Element_2_readData,4);
  }
  else
  {
    ;
  }
  
  Rte_Write_sender_sendOrder_Element_1_isClockWise(sendOrder_Element_1_isClockWise);
  Rte_Write_sender_sendOrder_Element_2_readData(sendOrder_Element_2_readData);
}


