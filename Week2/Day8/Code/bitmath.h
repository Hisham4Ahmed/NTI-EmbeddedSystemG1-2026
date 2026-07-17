#ifndef _BITMATH_H
#define _BITMATH_H

#define SetBit(Reg,BitNo)       Reg|=(1<<BitNo)
#define ClearBit(Reg,BitNo)     Reg&=~(1<<BitNo)
#define ReadBit(Reg,BitNo)      (Reg>>BitNo)&1


// (x & 0x0F) << 4) | ((x & 0xF0) >> 4); 

// int main()
// {
//     int number =10 ;
//     int result = 0 ;
//     result = ReadBit(number,31); // (number>>31)&1
// }

#endif 
