/*
    Preprocessor -> Text Replacement for PreProcessor Directives -> 
    #include -> Done 
    #define  -> Done 
    #undef  -> Done 
    #if #elif #else #endif -> Done 
    #error #warning  
    #ifndef -> Done 
    #ifdef  
    -------------------------
    compiler directives 
    #pragma 
    ------------------------
    gcc -E <fileName>.c -o <fileName>.i
*/



/*
    # include : TextReplacement for header file content and copy in the file 
        1- for system Lib  use : <>
            #include <LibName.h> ->  in system file 
        2- for user lib use : " "
            #include "math.h"
            user lib include have two type 
                1- absoulate path
                     #include "/home/hesham/Desktop/NTI/NTI-EmbeddedSystemG1-2026/Week2/Day6/Code/PreProcessorDirectives/Preprocessor.h"
                2- relative path 
                    PreProcessorDirectives/Preprocessor.c
                     #include "Preprocessor.h"
*/

/*
    # define : TextReplacement for object or function 
        object like macro 
            #define <word>  replacement 
            #define size       4
            #define MaxSpeed   1200
            #define 
        function like macro 
            #define add(x,y)  x+y 
            -> fast execution 
            -> take alot of memory calling

*/

/*
    #if 
    #elif
    #
 */
// #include <stdio.h> 
#include "Preprocessor.h"
#include "../StorageClasse/Stdtype.h"
#include "../StorageClasse/Stdtype.h"
#include "../StorageClasse/Stdtype.h"
#include "../StorageClasse/Stdtype.h"
#include "../StorageClasse/Stdtype.h"

#include "math/math.h"


// condition Preprocessor directives 
    #define Version    0

int main()
{
    // #if Version==1 
    //     printf("Speed max =120");
    //     printf("Temp max =200");
    //     printf("Type =VW");
    // #elif Version==2 
    //     printf("Speed max =200");
    //     printf("Temp max =100");
    //     printf("Type =Mar");
    // #elif Version==3
    //     printf("Speed max =500");
    //     printf("Temp max =30");
    //     printf("Type =BMW");
    // #else 
    //     // printf("invaild Version ");
    //     // #error "Invaild Veriosn"
    //     #warning " Invaild Version and we apply version1"
    //     printf("Speed max =120");
    //     printf("Temp max =200");
    //     printf("Type =VW");
    // #endif 




    // #if Version==1
    //     printf("Year=1990");
    // #elif Version==2
    //     printf("Year=1997");
    // #elif Version==3
    //     printf("Year=2000");
    // #else
    //     printf("InvaildVersion");
    // #endif
    
    // int version = 0 ; 
    // if (version==1)
    // {
    //     printf("Speed max =120");
    // }
    // else if (version==2)
    // {
    //     printf("Speed max =200");

    // }
    // else if (version==3)
    // {
    //     printf("Speed max =500");

    // }
    // else 
    // {
    //     printf("invaild Version ");
    // }
}































// #define   MaxSpeed 1200 
// #define   size     10
// #define  add1(x,y)  x+y  // -> no have memory 
// const int size  =10 ; 
// int Add2(int x , int y )
// {
//     return x+y; // -> 4 byte 
// }
// int main()
// {
//     // add1(5,7); //-> 1byte
//     Add2(10,10);
//     int arr [size] = {0};
//     int Searchvalue = 20 ;
//     for(int i  =0 ; i<size ;i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//         // add1(5,7); //-> 1byte
//         Add2(10,10);
//     #undef size 
//     #define size 5 
//     for(int i  =0 ; i<size ;i++)
//     {
//         printf("%d",arr[i]);
//     }
//         // add1(5,7); //-> 1byte 
//         Add2(10,10);
//     for(int i  =0 ; i<size ;i++)
//     {
//         if(Searchvalue==arr[i])
//         {printf("%d",i);}        
//     }
//         // add1(5,7);//-> 1byte 
//         Add2(10,10);
//     printf("MaxSpeed=%d\n",MaxSpeed);
// }