# Check Whether a Number is Palindrome or Not

## Author
Parth Ajmera

## Description
This C program takes an integer input from the user and checks whether the number is a palindrome. A palindrome number reads the same backward as forward, for example, 121 or 12321. The program uses simple arithmetic operations and loops to reverse the number and compare it with the original.

## Features
- Takes user input for an integer.
- Reverses the number using a `while` loop.
- Compares the reversed number with the original to determine if it is a palindrome.
- Prints the result clearly to the console.
- Uses only the standard input/output library (`stdio.h`).

## How It Works
- The program stores the original number in a temporary variable.
- It repeatedly extracts the last digit of the number using modulus operator `%`.
- Builds the reversed number by multiplying the previous reversed number by 10 and adding the extracted digit.
- Divides the original number by 10 in each iteration to reduce it until zero.
- Compares the reversed number with the original to decide palindrome status.