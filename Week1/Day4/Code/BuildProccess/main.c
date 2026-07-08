#include <stdio.h>
#include <stdlib.h>


int main()
{
    // char Character[5] = {'A', 'B','C','D','E'};
    // char Character[5] = {0};
    // int scanCounter=0;
    // printf("Enter a Cahracteres ");

    // for(scanCounter=0;scanCounter<5;scanCounter++)
    // {
    //     // printf("Enter a Cahracter of %d:",scanCounter+1);
    //     scanf(" %c",&Character[scanCounter]);
    // }

    // //Dispaly 
    // int counter = 0 ; 
    // for(counter=0;counter<5;counter++)
    // {
    //     printf(" %d\n",Character[counter]);
    // }



    // char Name[10]={0};
    // int counter=0;
    // printf("Enter your Name");
    // for(counter=0;counter<10;counter++)
    // {
    //     scanf(" %c",&Name[counter]);
    // }
    // printf("Welcome ");
    // for(counter=0;counter<10;counter++)
    // {
    //     printf("%c",Name[counter]);
    // }
    // printf("\n");
    
    // [^\\n]

    char name[20]={0};
    int x  = 30 ; 

    printf("Enter your name:");
    scanf("%s",name);
    printf("Welcome Mr.%s\n",name);


    return 0;
}

// write c function take from user character and display Ascii 