# Check Whether a Year is Leap Year or Not

## Author
Parth Ajmera

## Description
This C program checks if a given year is a leap year or not. A leap year is a year that has 366 days instead of the usual 365 days, with an extra day in February (29th). The program applies the standard leap year rules to determine whether the input year fulfills the criteria for being a leap year.

## Leap Year Rules
- A year is a leap year if it is divisible by 4 but not by 100, or
- It is divisible by 400.

For example, the year 2000 is a leap year, while 1900 is not.

## How It Works
The program takes an integer input representing the year and checks:
- If the year is divisible by 400, it is a leap year.
- Else if the year is divisible by 100, it is not a leap year.
- Else if the year is divisible by 4, it is a leap year.
- Otherwise, it is not a leap year.

Based on these conditions, it prints whether the year is a leap year or not.
