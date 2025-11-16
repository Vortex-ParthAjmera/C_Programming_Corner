# Find Product of Digits of a Number in C

## Author
PARTH AJMERA

## Description
This program calculates the product of the digits of an integer entered by the user. It uses basic input/output functions from `stdio.h` and utilizes a loop to iterate through each digit of the number, multiplying them together. The program is designed to help beginners understand loops and arithmetic operations in C.

## Features
- Takes an integer input from the user.
- Uses a loop to extract and multiply each digit of the number.
- Handles all digits, including zero (which multiplies the product by zero).
- Clear and simple implementation using standard C libraries.

## How It Works
1. The user is prompted to enter a number.
2. The number is processed inside a loop that continues until all digits are extracted.
3. In each iteration:
   - The last digit is obtained using the modulo operator (`%`).
   - The digit is multiplied into a product accumulator.
   - The last digit is removed by dividing the number by 10.
4. After the loop finishes, the product of the digits is displayed.
