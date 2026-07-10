#include <stdio.h>
#include <stdlib.h>
#include "Stdtype.h"
#include <stdint.h>
// Typedef -> rename for data type 
// typedef old name  new name ;

/*
    scope 
        -> in side block  (function ) ()
        -> in side file 
        -> in program 
    
    life time 
        -> block life time -> (function life time )
        -> Program life time -> 


    local var 
        scope : Block Scope 
        life time :  Block life time 
        Memory : Stack
    global var 
        scope : Program Scope
        life time : Program Life 
        Memory: Data Sagement (.data/.bss)

    function: 
        scope : Program Scope 
        life time : Program Life 

    static / extern 
    register / volatile 
    auto /
*/
/**
 * extern : skip this issue will be define in another file 
 *  global var 
 *      -> life time : not change 
 *      -> scope  : not change 
 *  local var 
 *      we can't use extern with normal local var 
 *  funtion :
 *      ->  life time :not change 
 *      ->  scope : not change
 */
/**
 * static : Keyword to protect the var or function 
 *  global var 
 *    -> life time : not change (Program life time )
 *    -> scope     : change scope from program scope to file scope
 *  funtion :
 *      ->  life time : not change (Program life time )
 *      ->  scope : change scope from program scope to file scope
 *  local var 
 *      -> life time : change life from Block life to Program life  
 *      -> scope  :  Not Change 
 *      -> Memory : change from Stack to Data_Sagment

 */

// extern uint8_t GlobalVar ; 


// void increament()
// {
//     int x = 0 ; // -> Stack
//     x++; // +1 
//     printf("%d\n",x); // 1
// }

void increament()
{
     static int x = 0 ; // -> Data_Sagment 
        /*
            static int x = 0 ; // -> Data_Sagment 
                create new allocation   
                update by zero 
        */
    
    x++; // +1 
    printf("%d\n",x); // 1
}
int main()
{
    // extern int Increament;
    // printf("in main function GlobalVar =  %d\n",GlobalVar);
    // printf("Calc=%d",calc(5,5));
    for(int i = 0 ;i<5;i++)
    {
        increament();
    }
    







    // unsigned short int TempSensor = 40 ;  //+ve
    // // unsigned char 
    // signed long long int Speed=200;

    // unsigned short int * Ptr =NULL;

    // uint8_t Speed = 200 ; 

    // int8_t  Temp = 100 ; 
    // uint32_t Number = 90 ; 
    // printf ("%d\n", Number);
    // printf ("%d\n", Temp);


}