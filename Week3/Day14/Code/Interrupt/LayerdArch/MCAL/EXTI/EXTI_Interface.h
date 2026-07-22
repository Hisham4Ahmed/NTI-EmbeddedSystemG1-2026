#ifndef _EXTI_INTERFACE_H
#define _EXTI_INTERFACE_H



void EXTI_Init(uint8_t InterruptName,uint8_t SensConfig);
void EXTI_Enable(uint8_t InterruptName);
void EXTI_Disable(uint8_t InterruptName);




#endif 