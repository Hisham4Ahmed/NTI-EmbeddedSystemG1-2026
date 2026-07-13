#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

typedef struct 
{
    uint8_t ID ; 
    uint32_t Degree; 

}Student;


int main()
{
    Student S1 = {0};
    Student S2 = {0};
    Student S3 = {0};
    Student S4 = {0};
    /////////////////////////////
    printf("Enter the ID For S1:");
    scanf("%hhd",&S1.ID);
    printf("Enter the Degree For S1:");
    scanf("%d",&S1.Degree);
    printf("Enter the ID For S2:");
    scanf("%hhd",&S2.ID);
    printf("Enter the Degree For S2:");
    scanf("%d",&S2.Degree);
    printf("Enter the ID For S3:");
    scanf("%hhd",&S3.ID);
    printf("Enter the Degree For S3:");
    scanf("%d",&S3.Degree);
    printf("Enter the ID For S4:");
    scanf("%hhd",&S4.ID);
    printf("Enter the Degree For S4:");
    scanf("%d",&S4.Degree);

    uint32_t Sum = S1.Degree + S2.Degree + S3.Degree + S4.Degree ; 
    
}