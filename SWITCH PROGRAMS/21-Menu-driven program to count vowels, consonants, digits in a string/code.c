#include <stdio.h>   // Standard I/O library for printf, scanf, fgets, getchar

int main() {
    char str[100];   // Array to store the input string (max length 99 chars + '\0')
    int i, count = 0, choice;   // i = loop variable, count = stores result count, choice = user menu choice

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  
    // fgets() reads the string (including spaces) until newline or buffer size is reached
    // Advantage over scanf("%s") → allows capturing spaces and avoids buffer overflow

    do {
        printf("\nMenu:\n");  
        printf("1. Count vowels\n");
        printf("2. Count consonants\n");
        printf("3. Count digits\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);   

        count = 0;  // Reset count for each new calculation

        if (choice == 1) {
            for (i = 0; str[i] != '\0'; i++) {   // Loop until null terminator
                switch (str[i]) {   // Check current character
                    // If it matches any vowel (lower/upper case), increase counter
                    case 'a': case 'e': case 'i': case 'o': case 'u':
                    case 'A': case 'E': case 'I': case 'O': case 'U':
                        count++;
                        break;
                    default:
                        // Not a vowel → do nothing
                        break;
                }
            }
            printf("Number of vowels: %d\n", count);
        }

        else if (choice == 2) {
            for (i = 0; str[i] != '\0'; i++) {   // Loop through string
                switch (str[i]) {
                    // If character is vowel → not consonant
                    case 'a': case 'e': case 'i': case 'o': case 'u':
                    case 'A': case 'E': case 'I': case 'O': case 'U':
                    // If character is digit → not consonant
                    case '0': case '1': case '2': case '3': case '4':
                    case '5': case '6': case '7': case '8': case '9':
                    // If character is whitespace → not consonant
                    case ' ': case '\n': case '\t':
                        break;   // Do nothing here
                    default:
                        // Every other character assumed as consonant
                        count++;
                        break;
                }
            }
            printf("Number of consonants: %d\n", count);
        }

        else if (choice == 3) {
            for (i = 0; str[i] != '\0'; i++) {
                switch(str[i]) {
                    // Check if character is one of the digits
                    case '0': case '1': case '2': case '3': case '4':
                    case '5': case '6': case '7': case '8': case '9':
                        count++;   // Increment count if digit found
                        break;
                    default:
                        // Not a digit → skip
                        break;
                }
            }
            printf("Number of digits: %d\n", count);
        }

        else if (choice == 4) {
            printf("Exiting program.\n");
        }

        else {
            printf("Invalid choice! Please select 1-4.\n");
        }

        // Flush leftover input (to avoid issues if user enters wrong/non-numeric data)
        while (getchar() != '\n');  

    } while (choice != 4);  // Repeat menu until user chooses to Exit

    return 0;  // Exit successfully
}
