# Print Day of the Week (1 = Monday … 7 = Sunday)

## Author
Parth Ajmera

## Description
This C program takes an integer input (1 to 7) from the user and prints the corresponding day of the week. The mapping is as follows: 1 for Monday, 2 for Tuesday, up to 7 for Sunday. The program uses the `switch` statement for decision making and only includes the standard input-output header `<stdio.h>`.

## Features
- Prompts the user to enter a number between 1 and 7.
- Uses a `switch` statement to map the number to the day of the week.
- Prints the name of the day corresponding to the entered number.
- Handles invalid inputs gracefully by printing an error message.
- Simple and beginner-friendly C code focusing on `switch` usage.

## How It Works
- The program asks the user to enter a number (1-7).
- The input number is read using `scanf`.
- The `switch` statement evaluates the input and prints the appropriate day:
  - Case 1: Monday
  - Case 2: Tuesday
  - Case 3: Wednesday
  - Case 4: Thursday
  - Case 5: Friday
  - Case 6: Saturday
  - Case 7: Sunday
- The `default` case handles any number outside the 1-7 range by printing an invalid input message.
