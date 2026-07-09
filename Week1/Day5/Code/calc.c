// Write C Function Take two Number and return the SUM & SUB & MULTI & DIV 

#include <stdio.h>
#include <stdlib.h>
void Calc(int Number1 , int Number2 , int * Sum , int * Sub)
{
    *Sum = Number1+Number2;
    *Sub = Number1-Number2;
    
}

int main ()
{
    int Number1 = 0 ;
    int Number2 = 0 ;
    int Sum = 0 ; 
    int Sub = 0 ;
    char state = 0;
    do 
    {
        system("clear");
        Sum = 0 ;
        Sub = 0 ;
        printf("Enter the Number1: ");
        scanf("%d",&Number1);
        printf("Enter the Number2: ");
        scanf("%d",&Number2); 
        Calc(Number1,Number2,&Sum,&Sub);
        printf("Sum=%d\n",Sum);
        printf("Sub=%d\n",Sub);
        printf("Enter E to exist:");
        scanf(" %c",&state);
    }while(state!='E');
}