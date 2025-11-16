# Find Number of Days in a Given Month

## Author
Parth Ajmera

## Description
This C program determines the number of days in a month based on the month number input by the user. It uses only the `stdio.h` library and a `switch` statement to return the days in the specified month. The program handles months with 31 days, 30 days, and February with 28/29 days (leap years not considered).

## Features
- Takes month number (1-12) as input from the user.
- Uses a `switch` statement to determine the number of days.
- Handles invalid month inputs with an error message.
- Simple structure using basic C concepts suitable for beginners.

## How It Works
- The user is prompted to enter a month number.
- The `switch` statement evaluates the month:
  - Cases 1, 3, 5, 7, 8, 10, 12 print "31 days".
  - Cases 4, 6, 9, 11 print "30 days".
  - Case 2 prints "28 or 29 days" (February).
  - Any other input triggers the default case to print "Invalid input".
