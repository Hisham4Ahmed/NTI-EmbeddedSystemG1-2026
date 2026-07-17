#include <stdint.h>
#include <util/delay.h>
#include "Atmega32regmap_beshoy_esmat.h"
#include "Bitmath.h"

// h g f e d c b a 
// 7 6 5 4 3 2 1 0 

#define Cathod_Zero    0x3F
#define Cathod_One     0x06 
#define Cathod_Two     0x5B 
#define Cathod_Three   0x4F 
#define Cathod_Four    0x66 
#define Cathod_Five    0x6D 
#define Cathod_Six     0x7D 
#define Cathod_Seven   0x07 
#define Cathod_Eight   0x7F 
#define Cathod_Nine    0x6F

#define Cathed_A       0x77     
#define Cathed_b       0x7C 
#define Cathed_C       0x39 
#define Cathed_d       0x5E 
#define Cathed_E       0x79
#define Cathed_F       0x71 

// Write C code to display number from 0 to 9 each 1 sec 

// Button -> GroupA Pin 3 
  // Dir must be Input  -> DDRA , 3 = 0 -> 
  // Read Pin 3 to get the state  -> PINA , 3 
  // State -> connection type is Pull up resistor 
      // Pressed = 0 
      // NotPressed =1 

//Led -> GroupC Pin 2 
  // Dir Must be Output  -> DDRC , 2 = 1 
  // Write the Output Value  Based on Button State 
    // Btn Pressed  -> Led On -> PORTC ,2 = 1 
    // Btn NotPressed  -> Led OFF -> PORTC ,2 = 0 

void main()
{
  ClearBit(DDRA_Reg,3); // Switch pin is 0 (input)
  SetBit(DDRC_Reg,2); // Led Pin is 1 (Output)
  uint8_t State = 0 ; 
  while(1)
  {
    State = ReadBit(PINA_Reg,3);
    if(State==0)
    {
      //LedOn
      SetBit(PORTC_Reg,2);
    }
    else 
    {
      //LedOff
      ClearBit(PORTC_Reg,2);
    }
  }
}





// void main()
// {

//     // DDRA_Reg = 0xFF ; 
//     // uint8_t count = 0 ;
//     // uint8_t Number[10] = {
//     //     Cathod_Zero ,
//     //     Cathod_One  ,
//     //     Cathod_Two  ,
//     //     Cathod_Three,
//     //     Cathod_Four ,
//     //     Cathod_Five ,
//     //     Cathod_Six  ,
//     //     Cathod_Seven,
//     //     Cathod_Eight,
//     //     Cathod_Nine };

//     while(1)
//     {
//       for(count = 0 ;count<=9 ;count++)
//       {
//         PORTA_Reg=Number[count];
//         _delay_ms(1000);
//       }
//     }
    
// }





// // Segment
//     void Segment_Init(uint8_t GroupName)
//     {
//         // Select Direction
//     }
//     void DisplayNumber(uint8_t GroupName, uint8_t Number)
//     {
//         // Display Number from 0 to 9 
//         // upgrade will be to 99 
//     }
//     void DisplayRang(uint8_t GroupName,uint8_t Start , uint8_t End )
//     {
//         // Display Range with 1 sec waiting 
//     }


// // Led 
//     void Led_Init(uint8_t GroupName , uint8_t PinNumber );
//     // void Led_state(uint8_t GroupName , uint8_t PinNumber , uint8_t state);
//     #define SourceConnection  1
//     #define SinkConnection    2
//     void Led_on(uint8_t GroupName , uint8_t PinNumber , uint8_t ConnectionType)
//     {
//         if(ConnectionType==SourceConnection)
//         {

//         }
//         else if (ConnectionType==SinkConnection)
//         {
            
//         }
//     }
//     void Led_off(uint8_t GroupName , uint8_t PinNumber , uint8_t ConnectionType){}
//     void Led_Toggel(uint8_t GroupName , uint8_t PinNumber , uint8_t ConnectionType)









