#include <stdio.h>

int main() {
    int choice;
    float temp, converted;

    while (1) {
        // Display menu
        printf("\nMenu:\n");
        printf("1. Celsius to Fahrenheit\n");
        printf("2. Fahrenheit to Celsius\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter temperature in Celsius: ");
                scanf("%f", &temp);
                if (temp < -273.15) {
                    printf("Invalid temperature: below absolute zero.\n");
                } else {
                    converted = (temp * 9.0 / 5.0) + 32;
                    printf("%.2f Celsius = %.2f Fahrenheit\n", temp, converted);
                }
                break;

            case 2:
                printf("Enter temperature in Fahrenheit: ");
                scanf("%f", &temp);
                if (temp < -459.67) {
                    printf("Invalid temperature: below absolute zero.\n");
                } else {
                    converted = (temp - 32) * 5.0 / 9.0;
                    printf("%.2f Fahrenheit = %.2f Celsius\n", temp, converted);
                }
                break;

            case 3:
                printf("Exiting program.\n");
                return 0;

            default:
                printf("Invalid choice. Please select 1, 2, or 3.\n");
        }
    }

    return 0;
}
