#ifndef _TIMER0_INTERFACE_H
#define _TIMER0_INTERFACE_H
#include  <stdint.h>
#include "../../COMMON/Bitmath.h"
#include "../../COMMON/Definition.h"
#include "../Atmega32regmap.h"

#include "Timer0_Private.h"
#include "Timer0_Config.h"


void TIMER0_Init(uint8_t TimerMode);

void TIMER0_Start(uint8_t ClockSelectValue);

void TIMER0_Stop(void);


void TIMER0_SetCallBackFunction(uint8_t TimerInterruptType, void (*PF)(void));

//Compare Match 
void __vector_10(void)   __attribute__((signal));
//OverFlow 
void __vector_11(void)   __attribute__((signal));

#endif