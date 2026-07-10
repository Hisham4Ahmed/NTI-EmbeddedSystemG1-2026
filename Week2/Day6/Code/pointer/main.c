#include <stdio.h>
#include <stdlib.h>



// ptr 
//*ptr
//&ptr
// Pointer to Pointer 
/*

*/
void add(int Number1 , int Number2, int *sum);

int main()
{
    int Number1 = 20 ; 
    int Number2 = 30 ; 
    int * Ptr = NULL;
    add(Number1,Number2,Ptr);
}
// int *sum = &Ptr ; 
void add(int Number1 , int Number2, int *sum)
{
    if(sum!=NULL)
    {
        *sum = Number1 + Number2;
    }
    else
    {
        printf("sum = Null");
    }
}
