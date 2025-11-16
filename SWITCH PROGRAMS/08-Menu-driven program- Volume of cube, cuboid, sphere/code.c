#include <stdio.h>

int main() {
    int choice;
    float side, length, width, height, radius, volume;
    const float PI = 3.14159f;

    printf("Volume Calculation Menu:\n");
    printf("1. Cube\n");
    printf("2. Cuboid\n");
    printf("3. Sphere\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);

    switch(choice) {
        case 1: // Cube
            printf("Enter the side length of the cube: ");
            scanf("%f", &side);
            volume = side * side * side;
            printf("Volume of the Cube = %.2f\n", volume);
            break;

        case 2: // Cuboid
            printf("Enter the length, width and height of the cuboid: ");
            scanf("%f %f %f", &length, &width, &height);
            volume = length * width * height;
            printf("Volume of the Cuboid = %.2f\n", volume);
            break;

        case 3: // Sphere
            printf("Enter the radius of the sphere: ");
            scanf("%f", &radius);
            volume = (4.0f/3.0f) * PI * radius * radius * radius;
            printf("Volume of the Sphere = %.2f\n", volume);
            break;

        default:
            printf("Invalid choice! Please select between 1 and 3.\n");
    }

    return 0;
}
