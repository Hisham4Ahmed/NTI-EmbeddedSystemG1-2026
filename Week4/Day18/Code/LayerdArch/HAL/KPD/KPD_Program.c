

/*
    7 8 9 
    4 5 6 
    1 2 3  
    C 0 E 
*/

#include <stdint.h>
#include "../../MCAL/DIO/DIO_Interface.h"
static uint8_t KeypadValue[4][3] =
{
    {'7','8','9'},
    {'4','5','6'},
    {'1','2','3'},
    {'C','0','E'},
};

void KPD_Init()
{
    // Coloum Direction 
    DIO_InitPin(Dio_GroupD,Dio_Pin0,Output);
    DIO_InitPin(Dio_GroupD,Dio_Pin1,Output);
    DIO_InitPin(Dio_GroupD,Dio_Pin2,Output);
    //Init value for coloum 
    DIO_WritePin(Dio_GroupD,Dio_Pin0,High);
    DIO_WritePin(Dio_GroupD,Dio_Pin1,High);
    DIO_WritePin(Dio_GroupD,Dio_Pin2,High);

    // ROW 
    DIO_InitPin(Dio_GroupB,Dio_Pin0,Input);
    DIO_InitPin(Dio_GroupB,Dio_Pin1,Input);
    DIO_InitPin(Dio_GroupB,Dio_Pin2,Input);
    DIO_InitPin(Dio_GroupB,Dio_Pin3,Input);
    //Enable Internal Pull UP
    DIO_WritePin(Dio_GroupB,Dio_Pin0,High);
    DIO_WritePin(Dio_GroupB,Dio_Pin1,High);
    DIO_WritePin(Dio_GroupB,Dio_Pin2,High);
    DIO_WritePin(Dio_GroupB,Dio_Pin3,High);
}

#define Pressed 0 
uint8_t KPD_GetButtonValue()
{
    uint8_t Result= 0 ;
    for(uint8_t C = 0 ;C <3;C++)
    {
        DIO_WritePin(Dio_GroupD,C,Low);
        for(uint8_t R = 0 ; R<4;R++)
        {
            DIO_ReadPin(Dio_GroupB,R,&Result);
            if(Result==Pressed)
            {
                return KeypadValue[R][C];
            }
        }
                DIO_WritePin(Dio_GroupD,C,High);
    }

}