#include <stdio.h>
#include "math.h"
int main()
{
    short int Number1 = 0 ;
    short int Number2 = 0 ; 
    /*Scanning Number*/
    printf("Enter the Number1:");
    scanf("%hd",&Number1);
    printf("Enter the Number2:");
    scanf("%hd",&Number2);

    short int Sum=0;
    // short int Sub=0;
    // short int Multi=0;
    // float Div=0;
    Sum=Add(Number1,Number2);
    // Sub = //Calling Sub ;
    // Multi = //Calling Mutli ;
    // Div  = //Calling Div ;
    printf("Sum=%d\n",Sum);
    return 0 ; 
}