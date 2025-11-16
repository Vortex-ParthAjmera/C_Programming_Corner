# Print All Prime Numbers in a Range Using Loops

## Author
PARTH AJMERA

## Description
This C program prints all prime numbers within a user-specified range using loops and basic conditional logic. It uses only the standard input/output library (`stdio.h`) and loop constructs to check each number in the range for primality.

## Features
- Takes lower and upper bounds of the range as input from the user.
- Checks every number in the range to determine if it is prime.
- Prints all prime numbers found in the given range.
- Uses simple nested loops for primality testing without advanced optimizations.
- Suitable for beginners learning loops and conditionals in C.

## How It Works
- The user is prompted to enter the start and end values of the range.
- A for-loop iterates over every number in this range.
- For each number, another loop checks divisibility by all integers from 2 up to half of the number.
- If a number is not divisible by any of these, it is prime and gets printed.
- Numbers 0 and 1 are skipped as they are not prime.
