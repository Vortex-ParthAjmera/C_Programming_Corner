# Menu-Driven Unit Conversion Program in C

## Author
Parth Ajmera

## Description
This C program provides a menu-driven interface for converting various units such as kilometers to meters, meters to centimeters, and more. Using only the `stdio.h` library and a `switch` statement, the program allows users to select the type of conversion they want and inputs the value to be converted, then displays the converted result.

## Features
- Interactive menu to choose unit conversions.
- Supports common conversions like:
  - Kilometers to meters
  - Meters to centimeters
  - Centimeters to millimeters
  - Meters to kilometers
  - And more (can be extended easily)
- Uses simple control flow with `switch` and basic input/output functions.
- Ideal for beginners to practice C fundamentals and menu-driven programming.

## How It Works
- The menu is displayed using `printf`, prompting the user to select a conversion option.
- The user's choice is read via `scanf`.
- The program uses a `switch` statement to perform the conversion based on the user's selection.
- Input values are converted according to the selected unit conversion and the result is printed to the console.
- If an invalid option is selected, an appropriate message is shown.
