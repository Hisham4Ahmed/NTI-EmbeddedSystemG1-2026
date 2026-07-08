#include <stdio.h>

int main() {
    int month = 0 ;

    printf("Enter month number (1-12): ");
    scanf("%d", &month);

    switch (month) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("31 days\n");
            break;
            
        case 4:
        case 6:
        case 9:
        case 11:
            printf("30 days\n");
            break;
            
        case 2:
            printf("28 or 29 days\n");
            break;            
        default:
            printf("Invalid month! Please enter a number between 1 and 12.\n");
    }

    return 0;
}