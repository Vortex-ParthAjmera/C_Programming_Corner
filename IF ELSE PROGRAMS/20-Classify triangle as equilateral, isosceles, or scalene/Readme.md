# Classify Triangle as Equilateral, Isosceles, or Scalene

## Author
Parth Ajmeras

## Description
This program classifies a triangle based on the lengths of its three sides as equilateral, isosceles, or scalene. It uses basic input/output functions from the standard C library (`stdio.h`) and conditional statements to determine the triangle type.

## Features
- Takes three integer inputs representing the sides of a triangle.
- Checks whether the sides form a valid triangle using the triangle inequality theorem.
- Classifies the triangle as:
  - **Equilateral**: all sides equal
  - **Isosceles**: two sides equal
  - **Scalene**: all sides different
- Prints the type of triangle or an invalid input message.

## How It Works
- The program prompts the user to enter the lengths of the three sides.
- Validates the input to ensure the sides can form a triangle.
- Uses `if-else` logic to classify the triangle based on side length comparisons.
- Displays the classification result or an error if the sides are invalid.