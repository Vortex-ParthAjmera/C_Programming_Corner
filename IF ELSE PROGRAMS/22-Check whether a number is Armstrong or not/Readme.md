# Check Whether a Number is Armstrong or Not

## Author
Parth Ajmera

## Description
This C program checks if a given integer is an Armstrong number (also called a narcissistic number). An Armstrong number is a number that is equal to the sum of its digits each raised to the power of the number of digits in the number. The program uses basic input/output and looping constructs from `stdio.h` to solve this problem.

## Features
- Accepts an integer input from the user.
- Calculates the number of digits in the number.
- Computes the sum of each digit raised to the power of the total digits.
- Compares the sum to the original number to determine if it is an Armstrong number.
- Prints the result to the console.
- Uses only standard C library `stdio.h`.

## How It Works
- The program first counts the digits in the input number.
- Then it extracts each digit, raises it to the count of digits, and sums these values.
- Finally, it compares this sum to the original number.
- If they are equal, the number is Armstrong; otherwise, it is not.
