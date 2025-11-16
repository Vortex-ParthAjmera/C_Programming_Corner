# Check Whether Character is Alphabet, Digit, or Special Symbol

## Author
Parth Ajmera

## Description
This C program determines whether a user-entered character is an alphabet (A-Z or a-z), a digit (0-9), or a special symbol. The program uses only the standard input/output header (`stdio.h`) and a `switch` statement for classification.

## Features
- Takes a single character input from the user.
- Uses a `switch` statement to classify the input character.
- Identifies alphabets (both uppercase and lowercase), digits, and special symbols.
- Prints an appropriate message for each category.

## How It Works
- The program reads one character input using `scanf`.
- The `switch` statement evaluates the character based on its ASCII value ranges.
- Cases cover alphabets (A-Z and a-z), digits (0-9), and a default case for special characters.
- Displays a message indicating the type of the character input.