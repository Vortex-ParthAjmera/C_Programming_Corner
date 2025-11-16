#include <stdio.h>

int main() {
    int choice;
    float side1, side2, side3;

    do {
        printf("\nTriangle Type Checker Menu:\n");
        printf("1. Check Triangle Type\n");
        printf("2. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter three sides of the triangle: ");
                scanf("%f %f %f", &side1, &side2, &side3);

                // Check triangle validity
                if (side1 <= 0 || side2 <= 0 || side3 <= 0) {
                    printf("Invalid input! Sides must be positive numbers.\n");
                }
                else if ((side1 + side2 > side3) && (side2 + side3 > side1) && (side1 + side3 > side2)) {
                    // Classify triangle by side equality using if-else
                    if (side1 == side2 && side2 == side3) {
                        printf("The triangle is Equilateral.\n");
                    }
                    else if (side1 == side2 || side2 == side3 || side1 == side3) {
                        printf("The triangle is Isosceles.\n");
                    }
                    else {
                        printf("The triangle is Scalene.\n");
                    }
                }
                else {
                    printf("The sides do not form a valid triangle.\n");
                }
                break;

            case 2:
                printf("Exiting program.\n");
                break;

            default:
                printf("Invalid choice! Please enter 1 or 2.\n");
        }
    } while(choice != 2);

    return 0;
}
