#include "E:\Embedded\Tasks\TrainingProject4\asw\Read_Data_SWC.h"
#include "E:\Embedded\Tasks\TrainingProject4\asw\Decision_SWC.h"
#include "E:\Embedded\Tasks\TrainingProject4\init.h"
#include "E:\Embedded\Tasks\TrainingProject4\bsw\port.h"


int main()
{
  initialize_system_systick();
  while(1);
}

void mario()
{
  static int  count = 0;
  if(count % 10000 == 0)
  {
      Read_Data_SWC_Runnable_1();
      Decision_SWC_Runnable_1();
  }
  count++;
}