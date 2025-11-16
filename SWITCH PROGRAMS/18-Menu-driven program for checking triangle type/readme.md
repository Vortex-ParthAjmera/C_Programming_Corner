# Menu-Driven Program to Check Triangle Type

## Author
Parth Ajmera

## Description
This C program allows the user to check the type of a triangle based on the lengths of its three sides. It uses a **menu-driven interface** and the **switch** statement to select between different options. The program identifies whether the triangle is Equilateral, Isosceles, or Scalene based on the side lengths entered by the user.

## Features
- Menu-driven user interface for ease of use.
- Uses `switch` statement for menu selection.
- Checks validity of the triangle before classification.
- Classifies triangles into:
  - Equilateral (all sides equal)
  - Isosceles (two sides equal)
  - Scalene (no sides equal)
- Simple and beginner-friendly C program using only `stdio.h`.

## How It Works
- The user is presented with a menu to choose the triangle type check.
- Inputs are taken for the three sides of the triangle.
- The program first validates if the given sides can form a triangle.
- Then, it classifies the triangle based on the equality of sides using the `switch` statement.
- The result is displayed accordingly.