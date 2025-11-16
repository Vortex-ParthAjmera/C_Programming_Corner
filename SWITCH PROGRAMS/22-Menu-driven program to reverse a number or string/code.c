#include <stdio.h>

int main() {
    int choice;
    do {
        printf("\nMenu:\n");
        printf("1. Reverse a Number\n");
        printf("2. Reverse a String\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            int num, reversed = 0, remainder;
            printf("Enter a number to reverse: ");
            scanf("%d", &num);

            // Reversing the number
            while (num != 0) {
                remainder = num % 10;
                reversed = reversed * 10 + remainder;
                num /= 10;
            }
            printf("Reversed number: %d\n", reversed);

        } else if (choice == 2) {
            char str[100];
            int length = 0;
            printf("Enter a string to reverse (max 99 chars): ");
            scanf(" "); // consume leftover newline
            fgets(str, 100, stdin);

            // Remove newline character if present
            while (str[length] != '\0') {
                if (str[length] == '\n') {
                    str[length] = '\0';
                    break;
                }
                length++;
            }

            // Reverse string using switch and if-else inside loop
            char reversedStr[100];
            int index = 0;

            while (length > 0) {
                length--;
                switch (1) { // dummy switch for structure
                    case 1:
                        if (str[length] != '\0') {
                            reversedStr[index] = str[length];
                            index++;
                        }
                        break;
                    default:
                        break;
                }
            }
            reversedStr[index] = '\0';

            printf("Reversed string: %s\n", reversedStr);

        } else if (choice == 3) {
            printf("Exiting program.\n");
        } else {
            printf("Invalid choice. Please try again.\n");
        }

    } while (choice != 3);

    return 0;
}
