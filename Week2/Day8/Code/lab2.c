#include <stdio.h>
#include <stdint.h>
#include "bitmath.h"

uint32_t  HighestOnce(uint32_t Number);

int main()
{
    uint32_t InputNumber = 0 ;
    uint32_t HighestValue = 0 ; 
    printf("Enter the Numbe:");
    scanf("%d",&InputNumber);
    HighestValue = HighestOnce(InputNumber);
    printf("HighestValue=%d\n",HighestValue);
}
uint32_t  HighestOnce(uint32_t Number)
{
    uint32_t Highest = 0 ;
    uint8_t Result = 0 ;
    uint8_t counter = 0;
    for(counter = 0 ;counter<32;counter++)
    {
        Result = ReadBit(Number,counter);
        if(Result==1)
        {
            Highest=counter;
        }
    }

    return Highest;
}
