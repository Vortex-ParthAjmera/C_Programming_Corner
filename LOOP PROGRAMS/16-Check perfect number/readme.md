# Check Perfect Number Using Loops in C

## Author
PARTH AJMERA

## Description
This program checks whether a given number is a perfect number using loops and standard input/output. A perfect number is a positive integer that is equal to the sum of its proper divisors (excluding the number itself). The program uses basic C language constructs with only the `stdio.h` library and loops.

## Features
- Takes an integer input from the user.
- Calculates the sum of all proper divisors of the number using loops.
- Compares the sum to the original number to determine if it is perfect.
- Displays an informative message based on the result.
- Uses clean and beginner-friendly logic.

## How It Works
1. The user is prompted to enter a positive integer.
2. The program uses a loop to iterate through all numbers from 1 up to (number - 1).
3. For each number in the loop, the program checks if it divides the input number evenly.
4. If yes, that divisor is added to a running sum.
5. After the loop completes, the sum is compared with the original number.
6. If they are equal, the number is perfect; otherwise, it is not.

