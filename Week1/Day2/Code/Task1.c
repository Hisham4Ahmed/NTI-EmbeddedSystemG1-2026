#include <stdio.h>

int main() {
    char charecterCheck = 0 ;

    printf("Enter an alphabet character: ");
    scanf(" %c", &charecterCheck);

    // Use switch to check for vowels (both lowercase and uppercase)
    switch (charecterCheck) {
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
            printf("Result: '%c' is a Vowel.\n", charecterCheck);
            break; // Stops the switch once a match is found
            
        default:
            // If the character doesn't match any vowel, we use an if statement
            // just to make sure they actually typed a letter and not a number/symbol.
            if ((charecterCheck >= 'a' && charecterCheck <= 'z') || (charecterCheck >= 'A' && charecterCheck <= 'Z')) {
                printf("Result: '%c' is a Consonant.\n", charecterCheck);
            } else {
                printf("Result: '%c' is not an alphabet letter.\n", charecterCheck);
            }
            break;
    }

    return 0;
}