# Check Whether a Character is Uppercase, Lowercase, Digit, or Special Symbol

## Author
Parth Ajmera

## Description
This C program reads a single character input from the user and identifies whether it is an uppercase letter, lowercase letter, digit, or special symbol. The program uses character comparisons with readable character constants, making it easy to understand without directly referring to ASCII values.

## Features
- Prompts the user to enter a character.
- Determines if the character is uppercase, lowercase, digit, or special symbol.
- Prints a clear message indicating the classification.
- Uses simple conditionals and character constants for comparison.

## How It Works
- Takes a character input via `scanf`.
- Uses `if-else` statements to check the character:
  - Checks if the character is between `'A'` and `'Z'` for uppercase letters.
  - Checks if the character is between `'a'` and `'z'` for lowercase letters.
  - Checks if the character is between `'0'` and `'9'` for digits.
  - If none of the above, classifies it as a special symbol.


# Other way {USING ASCII}
#include <stdio.h>

int main() {
    char ch;  // Variable to hold the input character

    // Prompt the user for input
    printf("Enter a single character: ");
    scanf("%c", &ch);

    // Check and classify the character using ASCII ranges
    if (ch >= 65 && ch <= 90) {
        // ASCII 65-90 corresponds to uppercase letters A-Z
        printf("The character '%c' is an uppercase letter.\n", ch);
    }
    else if (ch >= 97 && ch <= 122) {
        // ASCII 97-122 corresponds to lowercase letters a-z
        printf("The character '%c' is a lowercase letter.\n", ch);
    }
    else if (ch >= 48 && ch <= 57) {
        // ASCII 48-57 corresponds to digits 0-9
        printf("The character '%c' is a digit.\n", ch);
    }
    else {
        // Any other character is considered a special symbol
        printf("The character '%c' is a special symbol.\n", ch);
    }

    return 0;
}