#include "tm4c123gh6pm.h"
void initialize_system_systick()
{
  NVIC_ST_RELOAD_R = 0x3e80;
  NVIC_ST_CTRL_R = 0x07;
}