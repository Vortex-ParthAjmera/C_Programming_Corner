# Menu-Driven Program: Volume of Cube, Cuboid, and Sphere

## Author
Parth Ajmera

## Description
This C program calculates the volume of three different 3D shapes: a cube, a cuboid, and a sphere, based on the user's choice. It uses a menu-driven interface implemented with a `switch` statement to select the desired calculation. The program utilizes only the standard input-output library (`stdio.h`).

## Features
- Displays a menu to choose between Cube, Cuboid, and Sphere volume calculations.
- Takes input parameters specific to the chosen shape.
- Calculates and displays the volume accordingly.
- Uses clean, simple logic with the `switch` control structure.
- Suitable for beginners learning menu-driven programs and basic geometry calculations in C.

## How It Works
1. The program displays a menu listing the three shapes.
2. The user enters a choice number.
3. Using a `switch` statement, the program executes the respective volume calculation:
   - **Cube:** Asks for the side length and calculates volume as \( \text{side}^3 \).
   - **Cuboid:** Asks for length, width, and height; calculates volume as \( \text{length} \times \text{width} \times \text{height} \).
   - **Sphere:** Asks for radius and calculates volume using the formula \( \frac{4}{3} \pi r^3 \) (π approximated in the code).
4. The volume is printed on the console.
5. If an invalid option is selected, an error message is displayed.
