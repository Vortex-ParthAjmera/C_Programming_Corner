# Find Sum of Digits of a Number in C

## Author
PARTH AJMERA

## Description
This C program calculates the sum of the digits of a given integer number. It uses basic input/output functions from `stdio.h` and loop constructs to iterate through each digit of the number. The program extracts each digit by using the modulus operator and adds it to a running total until all digits are processed.

## Features
- Takes an integer input from the user.
- Uses a loop to extract and sum each digit of the number.
- Only requires the standard `stdio.h` library.
- Simple and efficient logic suited for beginners learning loops and arithmetic operations in C.

## How It Works
1. The program prompts the user to enter a number.
2. It initializes a sum variable to zero.
3. Using a loop (typically a `while` or `for` loop), the program:
   - Extracts the last digit of the number using modulus operator `% 10`.
   - Adds the extracted digit to the sum.
   - Removes the last digit by dividing the number by 10.
4. The loop continues until the number becomes zero.
5. Finally, it prints the sum of all digits.

