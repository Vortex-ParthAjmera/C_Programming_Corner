#include <stdio.h>

int main() {
    int choice;
    float value, result;

    printf("Unit Conversion Menu\n");
    printf("1. Kilometers to Meters\n");
    printf("2. Meters to Centimeters\n");
    printf("3. Centimeters to Millimeters\n");
    printf("4. Meters to Kilometers\n");
    printf("5. Exit\n");
    printf("Enter your choice (1-5): ");
    scanf("%d", &choice);

    if(choice >= 1 && choice <= 4) {
        printf("Enter the value to convert: ");
        scanf("%f", &value);
    }

    switch (choice) {
        case 1:
            // Kilometers to Meters
            if(value >= 0) {
                result = value * 1000;
                printf("%.2f kilometers = %.2f meters\n", value, result);
            } else {
                printf("Please enter a non-negative value.\n");
            }
            break;

        case 2:
            // Meters to Centimeters
            if(value >= 0) {
                result = value * 100;
                printf("%.2f meters = %.2f centimeters\n", value, result);
            } else {
                printf("Please enter a non-negative value.\n");
            }
            break;

        case 3:
            // Centimeters to Millimeters
            if(value >= 0) {
                result = value * 10;
                printf("%.2f centimeters = %.2f millimeters\n", value, result);
            } else {
                printf("Please enter a non-negative value.\n");
            }
            break;

        case 4:
            // Meters to Kilometers
            if(value >= 0) {
                result = value / 1000;
                printf("%.2f meters = %.5f kilometers\n", value, result);
            } else {
                printf("Please enter a non-negative value.\n");
            }
            break;

        case 5:
            printf("Exiting program.\n");
            break;

        default:
            printf("Invalid choice. Please select a valid option from 1 to 5.\n");
    }

    return 0;
}
