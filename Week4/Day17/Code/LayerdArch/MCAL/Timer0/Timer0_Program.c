
#include "Timer0_Interface.h"



static void (*Timer0_OVFCallBack)(void)=Null;
static void (*Timer0_CTCCallBack)(void)=Null;
void TIMER0_Init(uint8_t TimerMode)
{
    if(TimerMode==Timer0_NormalMode)
    {
        // Select the Normal Mode from TCCR0 
            ClearBit(TCCR0_Reg,Timer0_WGM00);
            ClearBit(TCCR0_Reg,Timer0_WGM01);
        // Enable the Interrupt for OverFlow 
        SetBit(TIMSK_Reg,Timer0_TOIE0);

    }
    else if (TimerMode==Timer0_CTCMode)
    {
        // Select the CTC Mode from TCCR0 
        ClearBit(TCCR0_Reg,Timer0_WGM00);
        SetBit(TCCR0_Reg,Timer0_WGM01);
        // Enable the Interrupt for CompareMatch 
        SetBit(TIMSK_Reg,Timer0_OCIE0);
    }

}

void TIMER0_Start(uint8_t ClockSelectValue)
{

    if (ClockSelectValue!=Timer0_Disable)
    {
      TCCR0_Reg = (TCCR0_Reg &~ClockSelectMask)|ClockSelectValue;
    }
}
void TIMER0_Stop(void)
{   
    TCCR0_Reg = (TCCR0_Reg &~ClockSelectMask)|Timer0_Disable;
}


void TIMER0_SetCallBackFunction(uint8_t TimerInterruptType, void (*PF)(void))
{
    if(TimerInterruptType==Timer0_OverFlowInterrupt)
    {
      if(PF!=Null)
      {
        Timer0_OVFCallBack=PF;
      }  
    }
    else if (TimerInterruptType==Timer0_CompareMatchInterrupt)
    {
        if(PF!=Null)
        {
            Timer0_CTCCallBack=PF;
        }
    }
}

//Compare Match 
void __vector_10(void)   __attribute__((signal));
void __vector_10(void)
{
    
}
//OverFlow 
void __vector_11(void)   __attribute__((signal));
void __vector_11(void)
{

}