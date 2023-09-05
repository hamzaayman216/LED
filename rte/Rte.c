#include "Rte_Type.h"


variable_isClockWise read_application_swc_composition_sender_sendOrder_Element_1_isClockWise = 0;
variable_readData read_application_swc_composition_sender_sendOrder_Element_2_readData = 0;


Std_ReturnType Rte_Read_decision_application_swc_composition_receiver_sendOrder_Element_1_isClockWise(variable_isClockWise* data)
{
   Std_ReturnType return_value = E_NOT_OK;
   if (NULL_PTR == data){
         return_value = E_NOT_OK;
   }

   else{
      *data = read_application_swc_composition_sender_sendOrder_Element_1_isClockWise;
      return_value = E_OK;
   }
   return return_value;
}

Std_ReturnType Rte_Read_decision_application_swc_composition_receiver_sendOrder_Element_2_readData(variable_readData* data)
{
   Std_ReturnType return_value = E_NOT_OK;
   if (NULL_PTR == data){
         return_value = E_NOT_OK;
   }

   else{
      *data = read_application_swc_composition_sender_sendOrder_Element_2_readData;
      return_value = E_OK;
   }
   return return_value;
}

Std_ReturnType Rte_Write_read_application_swc_composition_sender_sendOrder_Element_1_isClockWise(variable_isClockWise data)
{
     read_application_swc_composition_sender_sendOrder_Element_1_isClockWise = data;
   return E_OK;
}

Std_ReturnType Rte_Write_read_application_swc_composition_sender_sendOrder_Element_2_readData(variable_readData data)
{
     read_application_swc_composition_sender_sendOrder_Element_2_readData = data;
   return E_OK;
}



