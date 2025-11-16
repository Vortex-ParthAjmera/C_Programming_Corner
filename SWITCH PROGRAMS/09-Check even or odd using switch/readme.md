# Check Even or Odd Using Switch Statement in C

## Author
Parth Ajmera

## Description
This C program checks whether a given integer is even or odd using the `switch` statement. It uses the modulo operator `%` to find the remainder when the number is divided by 2, and then switches on the result to print whether the number is even or odd. The program uses only `stdio.h` and is simple for beginners.

## Features
- Takes an integer input from the user.
- Uses the switch-case structure to check if the number is even or odd.
- Prints an appropriate message indicating the result.
- Minimalistic code relying only on the standard input/output library.

## How It Works
- The program reads a number using `scanf`.
- Computes `number % 2`, which is either 0 (even) or 1 (odd).
- The `switch` statement evaluates this result:
  - Case `0`: Prints "Number is Even."
  - Case `1`: Prints "Number is Odd."
