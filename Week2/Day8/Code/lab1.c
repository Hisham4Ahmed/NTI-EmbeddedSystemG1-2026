#include <stdint.h>
#include <stdio.h>
// setBit  -> Reg|=(1<<BitNumber)
// ReadBit -> Result = (Reg>>BitNumber)&1

uint8_t NumberOfOnce(uint32_t Value)
{
    uint8_t NumberofOnce = 0; 
    uint8_t Result =  0; 
    for(int i = 0 ;i <32;i++)
    {
        Result = (Value >> i) & 1 ; 
        if(Result!=0)
        {
            NumberofOnce++;
        } 
    }


    return NumberofOnce ; 
}

int main()
{
    int number = 15 ; 
    printf("Numberofonce=%d\n",NumberOfOnce(number));
}