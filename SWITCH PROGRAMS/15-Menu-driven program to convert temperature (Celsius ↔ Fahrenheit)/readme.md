# Menu-Driven Temperature Converter (Celsius ↔ Fahrenheit)

## Author
Parth Ajmera

## Description
This C program provides a simple menu-driven interface to convert temperatures between Celsius and Fahrenheit. It uses the standard input/output library (`stdio.h`) and the `switch` statement for menu selection. Users can choose the conversion direction or exit the program.

## Features
- Converts temperature from Celsius to Fahrenheit and vice versa.
- Uses a clear menu for user interaction.
- Utilizes `switch` for handling user choices.
- Employs only the standard C library (`stdio.h`).
- Simple, beginner-friendly code ideal for learning decision control structures.

## How It Works
- The program displays a menu:
  1. Celsius to Fahrenheit conversion
  2. Fahrenheit to Celsius conversion
  3. Exit
- Based on the user’s input, the program prompts for the temperature value.
- It computes the converted temperature using the appropriate formula:
  - Celsius to Fahrenheit: \( F = \frac{9}{5} \times C + 32 \)
  - Fahrenheit to Celsius: \( C = \frac{5}{9} \times (F - 32) \)
- The result is displayed.
- The menu repeats until the user selects Exit.