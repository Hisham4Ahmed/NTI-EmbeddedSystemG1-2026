#include <stdint.h>
#include <stdio.h>


static uint8_t GlobalVar = 200 ; 

static int add (int x, int y)
{
    return x + y; 
}

int calc(int no1,int no2)
{
    return add(no1,no2);
}
// 1- preprocceor 
// 2- compiler 
// 3- assembler 
// 4- linker -> 

/**
    calc 
*/
// -> calc(no, no , operation);
// Helper function 
    // add 
    // sub 
    // multi 
