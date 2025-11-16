# Print Month Name from Number (1–12) in C

## Author
Parth Ajmera

## Description
This C program reads an integer input (between 1 and 12) from the user and prints the corresponding month name using a `switch` statement. It demonstrates the use of conditional branching and basic input/output functions from `stdio.h`.

## Features
- Prompts the user to enter a month number (1 to 12).
- Uses a `switch` statement to match the month number.
- Prints the appropriate month name or an error message for invalid input.
- Simple, clean code structure ideal for beginners learning control flow.

## How It Works
- The program uses `printf` to prompt the user.
- Reads the month number using `scanf`.
- A `switch` checks the entered number:
  - Case 1 prints "January", case 2 prints "February", and so on up to case 12.
  - If the number is outside 1 to 12, the `default` case prints an error message.
  