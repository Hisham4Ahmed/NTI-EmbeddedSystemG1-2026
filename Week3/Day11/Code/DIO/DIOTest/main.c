#include <stdint.h>
#include <util/delay.h>
#include "Atmega32regmap_beshoy_esmat.h"
#include "Bitmath.h"

// write c code to toggle bit - 5 in groupb every 1 sec
void main()
{
    // // Group A -> OUTPUT & 4 high & Low 
    // // Select Dir the GroupA as Output 
    // // DDRA_Reg = 255 ; // 1 1 1 1 1 1 1 1 
    // DDRA_Reg = 0xFF ; 
    // // DDRA_Reg = 0b11111111; 
    // //Select Outputvalue 
    // // PORTA_Reg =  15 ; // 0 0 0 0 1 1 1 1 
    // PORTA_Reg =  0x0F; 
    // // PORTA_Reg = 0b00001111; 
    // SetBit(DDRC_Reg,2);
    //Init 
        // Direction register outside super loop 
    // SetBit(DDRB_Reg,5); // DDRB_REG   = 0b
    SetBit(DDRB_Reg,3);
    while(1)
    { // Super Loop 
        // App 
        // Outvalue in side Super loop Low / High  
        // read input in side super loop 
        // SetBit(PORTB_Reg,5); // high 
        // _delay_ms(1000); // wait for 1 sec 
        // ClearBit(PORTB_Reg,5); // low 
        // // _delay_ms(1000); // wait for 1 sec  
        // ToggleBit(PORTB_Reg,3);
        // _delay_ms(1000); // wait for 1 sec  
    }
}