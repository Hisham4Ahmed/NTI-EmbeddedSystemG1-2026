    //  write code ask user to enter two number (int) and print the Basics Operation
#include <stdio.h>

int main()
{
    int Number1 = 0 ;
    int Number2 = 0 ;

    printf("Enter Number1:");
    scanf("%d",&Number1);
    printf("Enter Number2:");
    scanf("%d",&Number2);

    printf("Sum=%d\n",Number1+Number2);
    printf("Sub=%d\n",Number1-Number2);
    printf("mul=%d\n",Number1*Number2);
    printf("div=%f\n",Number1/Number2); // -> Casting Search 
     printf("rem=%d\n",Number1%Number2);       
}