#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


typedef struct
{
    uint8_t Name[20];
    uint8_t Degree;
    uint16_t Level;
}NTI_Student;

#define Size 5 
int main()
{
    NTI_Student Group1[Size]={0};
    uint8_t Counter = 0 ;
    for(Counter=0;Counter<Size;Counter++)
    {
        printf("Enter Name S%d:",Counter+1);
        scanf("%s",Group1[Counter].Name);
        printf("Enter Level S%d:",Counter+1);
        scanf("%hd",&Group1[Counter].Level);
        printf("Enter Degree S%d:",Counter+1);
        scanf("%hhd",&Group1[Counter].Degree);

    }







    return 0;
}