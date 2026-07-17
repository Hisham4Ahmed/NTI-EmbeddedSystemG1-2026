#include <stdint.h> // uint8_t 


// SREG - > 7    -> Must be one 
    // 0x5F -> Size = 1 Byte
    // Set bit
// 5B // GICR  
#define SetBit(Reg,BitNo)   Reg|=(1<<BitNo)

#define SERG_Reg   *((volatile uint8_t*)0x5F)
 
void main()
{
    // uint8_t *SREG_Ptr = (volatile uint8_t*)0x5F; // correct 
    // SetBit(*SREG_Ptr,7);
    // // *SREG_Ptr = *SREG_Ptr | (1<<7);
    //     uint8_t * GICR_Ptr = (volatile uint8_t*)0x5B;
    //     SetBit(*GICR_Ptr,7);
    //     SetBit(*GICR_Ptr,5);
    // // *SREG_Ptr = 50 ; 
    SetBit(SERG_Reg,7);
      
}