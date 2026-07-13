#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

typedef struct{
    uint8_t name[50];
    uint32_t id;
    _Float32 grade1;
    _Float32 grade2;
    _Float32 grade3;
} Student;

_Float32 calculateTotal(Student s) {
    return s.grade1 + s.grade2 + s.grade3;
}

_Float32 calculatePercentage(_Float32 total) {
    return (total / 300) * 100;
}

void printStudentReport( Student s) {
    float total = calculateTotal(s);
    float percentage = calculatePercentage(total);

    printf("\n--- Student Report---\n");
    printf("Name: %s\n", s.name);
    printf("ID: %d\n", s.id);
    printf("Total Degree: %.2f / 300\n", total);
    printf("Percentage: %.2f%%\n", percentage);
    
    if (percentage >= 50.0) {
        printf("State: Pass\n");
    } else {
        printf("State: Fail\n");
    }
}

int main() {
    Student Group1[3];

    printf("Enter the Student Name : ");
    scanf("%s",s1.name);

    printf("Enter the ID:");
    scanf("%d", &s1.id);

    printf("Enter the D ");
    scanf("%f", &s1.grade1);

    scanf("%f", &s1.grade2);

    scanf("%f", &s1.grade3);

    for (size_t i = 0; i < 3; i++)
    {
        printStudentReport(Group1[i]);
    }
    

    return 0;
}