# Reverse a Number in C

## Author
PARTH AJMERA

## Description
This C program reverses the digits of a given integer input by the user using simple loops and basic input/output functions from `stdio.h`. It reads the number, extracts its digits one by one using the modulo operator, and constructs the reversed number by appending digits in reverse order.

## Features
- Takes an integer input from the user.
- Uses loops to reverse the digits of the number.
- Prints the reversed number.
- Written using only standard I/O library (`stdio.h`) and loops.
- Suitable for beginners to understand loops and arithmetic operations.

## How It Works
- The program prompts the user to enter an integer.
- Using a loop, it extracts the last digit of the number using `% 10`.
- The reversed number is constructed by multiplying the current reversed number by 10 and adding the extracted digit.
- The original number is reduced by dividing by 10 in each iteration until it becomes zero.
- Finally, the reversed number is printed on the screen.
