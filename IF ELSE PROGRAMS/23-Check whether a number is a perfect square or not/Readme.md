# Check Whether a Number is a Perfect Square

## Author
Parth Ajmera

## Description
This C program checks if a user-input integer is a perfect square or not, using only the standard input-output library (`stdio.h`). The program iteratively tests if any number squared equals the input number, avoiding the use of math library functions for square root calculation.

## How It Works
- The user is prompted to enter an integer.
- The program checks every number starting from 0 up to the input number.
- For each number `i`, it computes `i * i` and compares with the input.
- If a match is found, the input number is confirmed as a perfect square.
- If no matches are found, it is not a perfect square.
- The program prints the result accordingly.