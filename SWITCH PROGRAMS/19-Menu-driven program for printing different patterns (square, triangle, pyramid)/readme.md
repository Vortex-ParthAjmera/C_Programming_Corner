# Menu-Driven Pattern Printing Program in C

## Author
Parth Ajmera

## Description
This C program allows the user to print different star patterns including a square, triangle, and pyramid, through a menu-driven interface. The program uses only `stdio.h` for input/output and a `switch` statement to handle user's choices. It is an excellent example for practicing nested loops, conditionals, and basic control flow in C.

## Features
- Provides a menu to select from three patterns: Square, Triangle, Pyramid.
- Uses switch-case to route to the correct pattern printing function.
- Accepts the number of rows to define the size of the pattern.
- Outputs star (`*`) patterns based on user choice.
- Simple, clean, and beginner-friendly code structure.

## How It Works
1. The program displays a menu for the user to select a pattern.
2. Based on user's choice, the program prompts for the number of rows.
3. Using nested loops, the program prints the selected pattern:
   - Square: Prints a solid square of stars.
   - Triangle: Prints a right-angled triangle.
   - Pyramid: Prints a centered pyramid shape.
4. The `switch` statement manages the control flow depending on user input.
