#include <stdio.h>
#include <stdlib.h>

int main()
{

    char Temp[5]={0};
    int sum  = 0 ;
    float avrg = 0 ; 
    int count = 0 ;
    char  ProgramStatus = 0 ; 
    //scan from user 
    do
    {
        sum = 0 ;
        system("clear");
        for(count =0 ;count<5;count++)
        {
         printf("Enter the Temp[%d]:",count+1);
         scanf("%hhd",&Temp[count]);
         sum+=Temp[count];
        }
        // avrg = (float)sum/5;
        avrg = sum/5.0;
         printf("the Sum=%d\n",sum);
        printf("the Avrg=%0.3f\n",avrg);
        printf("Enter the e to exist:");
        scanf(" %c",&ProgramStatus);
    }while(ProgramStatus!='e');
}