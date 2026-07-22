

void EXTI_Init(uint8_t InterruptName,uint8_t SensConfig)
{
    if(InterruptName==Exti_Interrupt0)
    {
        if(SensConfig==Exti_LowLevel)
        {
            ClearBit(MCUCR_Reg,Exti_ISC00);
            ClearBit(MCUCR_Reg,Exti_ISC01);
        }
    }
    else if (InterruptName==Exti_Interrupt1)
    {

    }
    else if (InterruptName==Exti_Interrupt2)
    {

    }
}

void EXTI_Enable(uint8_t InterruptName)
{
    if(InterruptName==Exti_Interrupt0)
    {
        SetBit(GICR_Reg,Exti_INT0);
    }
    else if(InterruptName==Exti_Interrupt1)
    {
        SetBit(GICR_Reg,Exti_INT1);
    }
    else if(InterruptName==Exti_Interrupt2)
    {
        SetBit(GICR_Reg,Exti_INT2);
    }
}


void EXTI_Disable(uint8_t InterruptName)
{
    if(InterruptName==Exti_Interrupt0)
    {
        ClearBit(GICR_Reg,Exti_INT0);
    }
    else if(InterruptName==Exti_Interrupt1)
    {
        ClearBit(GICR_Reg,Exti_INT1);
    }
    else if(InterruptName==Exti_Interrupt2)
    {
        ClearBit(GICR_Reg,Exti_INT2);
    }
}