#include <stdio.h>
#include <stdlib.h> 
void SwapTwoNumberByRefer(int *x , int *y);
void SwapTwoNumberByvalue(int x , int y);
void SwapTwoNumberGlobal();
int Number1 = 0 ;
int Number2 = 0 ;
int main()
{

    char state =  0;
    do 
    {
        system("clear");
        printf("Enter the Number1: ");
        scanf("%d",&Number1);
        printf("Enter the Number2: ");
        scanf("%d",&Number2);
        printf("After Swapping By Use SwapTwoNumberByvalue\n");
        SwapTwoNumberByvalue(Number1,Number2);
        printf("Number1=%d\n",Number1);
        printf("Number2=%d\n",Number2);
        printf("After Swapping By Use SwapTwoNumberByRefer\n");
        SwapTwoNumberByRefer(&Number1,&Number2);
        printf("Number1=%d\n",Number1);
        printf("Number2=%d\n",Number2);
        printf("Enter E to exist:");
        scanf(" %c",&state);
    }while(state!='E');
}

void SwapTwoNumberByvalue(int x , int y)
{
    int Temp = 0 ; 
    Temp = x ;
    x = y ;
    y = Temp;
    // printf("Swapping in side  SwapTwoNumberByvalue function \n");
    // printf("x=%d\n",x);
    // printf("y=%d\n",y);
}
void SwapTwoNumberByRefer(int *x , int *y)
{
    // X is Pointer 
    // Y is Pointer 
    int Temp =  0 ;
    Temp = *x ;
    *x  =  *y ;
    *y  =  Temp;
}
void SwapTwoNumberGlobal()
{
    int Temp = Number1 ; 
    Number1 = Number2  ; 
    Number2 = Temp;
}