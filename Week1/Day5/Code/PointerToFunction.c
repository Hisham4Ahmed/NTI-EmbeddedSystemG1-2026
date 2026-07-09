#include <stdio.h>

int add (int x  , int y );

int main()
{
    int (*PF)(int, int)= add;
    int sum = 0 ;
    sum = PF(5,7);
    printf("%d\n",sum);
}



int add (int x  , int y)
{
    return x+y;
}