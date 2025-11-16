# Vowel or Consonant Check Using Switch in C

## Author
Parth Ajmera

## Description
This C program checks whether an entered alphabet character is a vowel or a consonant using the `switch` statement. It accepts a single character input from the user and evaluates it against vowel cases, printing the appropriate result.

## Features
- Uses only the standard input-output library (`stdio.h`).
- Takes one character input from the user.
- Utilizes the `switch` statement for efficient vowel checking.
- Supports both uppercase and lowercase vowels.
- Prints "Vowel" if the character is a vowel; otherwise, prints "Consonant".

## How It Works
- The program prompts the user to enter an alphabet character.
- The character is read using `scanf`.
- The `switch` statement compares the input against all vowels (both uppercase and lowercase).
- If a match is found, it prints "Vowel".
- If there is no match, the `default` case handles the scenario by printing "Consonant".