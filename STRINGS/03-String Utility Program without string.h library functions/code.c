#include <stdio.h>

// Function to calculate string length
int stringLength(char str[]) {
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }
    return len;
}

// Function to copy one string to another
void stringCopy(char dest[], char src[]) {
    int i = 0;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
}

// Function to concatenate two strings
void stringConcat(char dest[], char src[]) {
    int i = 0;
    while (dest[i] != '\0') {
        i++;
    }
    int j = 0;
    while (src[j] != '\0') {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';
}

// Function to compare two strings
int stringCompare(char str1[], char str2[]) {
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i])
            return str1[i] - str2[i];
        i++;
    }
    return str1[i] - str2[i];
}

// Function to count vowels, consonants, digits, and spaces
void countCharacters(char str[], int *vowels, int *consonants, int *digits, int *spaces) {
    *vowels = *consonants = *digits = *spaces = 0;
    int i = 0;
    while (str[i] != '\0') {
        char ch = str[i];
        if (ch == ' ' || ch == '\t') {
            (*spaces)++;
        } else if (ch >= '0' && ch <= '9') {
            (*digits)++;
        } else if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
            // Check vowel
            if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ||
                ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                (*vowels)++;
            } else {
                (*consonants)++;
            }
        }
        i++;
    }
}

int main() {
    int choice;
    char str1[200], str2[200], result[400];
    int vowels, consonants, digits, spaces;

    while (1) {
        printf("\nMenu:\n");
        printf("1. Find length of a string\n");
        printf("2. Copy one string to another\n");
        printf("3. Concatenate two strings\n");
        printf("4. Compare two strings\n");
        printf("5. Count vowels, consonants, digits and spaces\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();  // consume newline

        switch (choice) {
            case 1:
                printf("Enter string: ");
                fgets(str1, sizeof(str1), stdin);
                // Remove trailing newline
                str1[stringLength(str1) - 1] = '\0';
                printf("Length of string: %d\n", stringLength(str1));
                break;

            case 2:
                printf("Enter source string: ");
                fgets(str1, sizeof(str1), stdin);
                str1[stringLength(str1) - 1] = '\0';
                stringCopy(str2, str1);
                printf("Copied string: %s\n", str2);
                break;

            case 3:
                printf("Enter first string: ");
                fgets(str1, sizeof(str1), stdin);
                str1[stringLength(str1) - 1] = '\0';
                printf("Enter second string: ");
                fgets(str2, sizeof(str2), stdin);
                str2[stringLength(str2) - 1] = '\0';
                stringCopy(result, str1);
                stringConcat(result, str2);
                printf("Concatenated string: %s\n", result);
                break;

            case 4:
                printf("Enter first string: ");
                fgets(str1, sizeof(str1), stdin);
                str1[stringLength(str1) - 1] = '\0';
                printf("Enter second string: ");
                fgets(str2, sizeof(str2), stdin);
                str2[stringLength(str2) - 1] = '\0';
                {
                    int cmp = stringCompare(str1, str2);
                    if (cmp == 0) {
                        printf("Strings are equal.\n");
                    } else if (cmp < 0) {
                        printf("First string is lexicographically smaller.\n");
                    } else {
                        printf("First string is lexicographically greater.\n");
                    }
                }
                break;

            case 5:
                printf("Enter string: ");
                fgets(str1, sizeof(str1), stdin);
                str1[stringLength(str1) - 1] = '\0';
                countCharacters(str1, &vowels, &consonants, &digits, &spaces);
                printf("Vowels: %d\nConsonants: %d\nDigits: %d\nSpaces: %d\n",
                       vowels, consonants, digits, spaces);
                break;

            case 6:
                printf("Exiting program.\n");
                return 0;

            default:
                printf("Invalid choice, try again.\n");
        }
    }
}
