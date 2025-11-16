# Check Whether a Number is Prime or Not

## Author
Parth Ajmera

## Description
This C program determines if a given integer is a prime number. A prime number is a natural number greater than 1 that has no divisors other than 1 and itself. The program prompts the user to enter an integer and checks for primality using a simple loop and conditional logic.

## Features
- Reads an integer input from the user.
- Checks if the number is prime by verifying divisibility from 2 up to half of the number.
- Displays whether the number is prime or not.
- Handles edge cases like numbers less than 2 which are not prime.
- Simple and beginner-friendly implementation.

## How It Works
- The program takes input using `scanf`.
- Uses a `for` loop to test divisibility of the number from 2 to `number/2`.
- If any divisor is found, the number is not prime.
- If no divisors are found and the number is greater than 1, it prints that the number is prime.