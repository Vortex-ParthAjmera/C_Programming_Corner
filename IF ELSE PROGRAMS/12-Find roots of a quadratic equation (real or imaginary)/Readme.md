# Find Roots of a Quadratic Equation (Real or Imaginary)

## Author
Parth Ajmera

## Description
This C program computes the roots of a quadratic equation of the form \( ax^2 + bx + c = 0 \), where `a`, `b`, and `c` are coefficients input by the user. It determines whether the roots are real and distinct, real and equal, or imaginary (complex), and displays them accordingly. This implementation uses only the standard input-output library (`stdio.h`).

## Features
- Takes input coefficients \(a\), \(b\), and \(c\) from the user.
- Calculates the discriminant \(D = b^2 - 4ac\).
- Determines the nature of roots based on the discriminant:
  - **D > 0:** Two distinct real roots.
  - **D = 0:** One real root (repeated).
  - **D < 0:** Roots are imaginary (complex).
- Prints the roots or a message for imaginary roots without using external libraries like `math.h`.

## How It Works
- The program calculates the discriminant \(D = b^2 - 4ac\).
- For real roots, it computes the roots using the quadratic formula.
- For imaginary roots, it indicates they are complex since square roots of negative numbers are not handled without `math.h`.
- The program elegantly handles all these cases using conditional `if-else` statements.
