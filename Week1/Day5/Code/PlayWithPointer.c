#include <stdio.h>
#include <stdlib.h>
/**
    %d int 
    %hd short int 
    %hhd char 
    %ld long int
    %lld long long int
    %f
    %s
    %c
    %p
*/

/*
    ptr  => address of variable ;
    *ptr => value of variable  ;
    &ptr => address of Pointer  ;
*/
int main()
{
    // short int * ptr=NULL; 
    // short int x = 30;
    // // *ptr = 130;
    // printf("%d\n",x);
    // printf("%p\n",&x);
    // ptr=&x; //-> Pointer Assign
    // printf ("%d\n",*ptr);
    // printf ("%p\n",ptr);
    // ---------------------------
    char number = 60 ; 
    char * ptr = &number;
    printf("value of number=%hhd\n",number); // 60 
    printf("address of number=%p\n",&number); // address 
    printf("*ptr=%hhd\n",*ptr); // 60
    printf("ptr=%p\n",ptr); // address of var 
    printf("ptr=%p\n",&ptr); // address of pointer 
    // printf("size of Number =%ld\n",sizeof(number)); // 1 byte
    // printf("size of ptr  =%ld\n",sizeof(ptr)); // 8 byte 
    
}