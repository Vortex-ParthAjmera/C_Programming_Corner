# Find Maximum of Two Numbers Using Switch in C

## Author
Parth Ajmera

## Description
This C program finds the maximum of two numbers using the `switch` statement. It takes two integers as input from the user and compares them using a relational expression inside the `switch`. The program then prints the larger number based on the evaluation.

## Features
- Prompts the user to enter two integers.
- Uses a `switch` statement on the expression `(num1 > num2)`.
- Case 1: Prints the first number as maximum.
- Case 0: Prints the second number as maximum.
- Simple, beginner-friendly example demonstrating `switch` with relational expressions.

## How It Works
- The program reads two integers using `scanf`.
- The expression `(num1 > num2)` evaluates to either `1` (true) or `0` (false).
- The `switch` statement uses that value to select the appropriate case.
- If case is 1, it prints the first number as maximum.
- If case is 0, it prints the second number as maximum.
- Note: The program assumes the numbers are not equal; handling equality requires additional logic.
