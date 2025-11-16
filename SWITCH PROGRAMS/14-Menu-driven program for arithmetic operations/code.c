#include <stdio.h>

int main() {
    int choice, num1, num2, result;
    char cont;

    do {
        printf("Arithmetic Operations Menu:\n");
        printf("1. Addition (+)\n");
        printf("2. Subtraction (-)\n");
        printf("3. Multiplication (*)\n");
        printf("4. Division (/)\n");
        printf("5. Modulus (%%)\n");
        printf("Enter your choice (1-5): ");
        scanf("%d", &choice);

        // Validate choice using if-else
        if (choice >= 1 && choice <= 5) {
            printf("Enter two integers: ");
            scanf("%d %d", &num1, &num2);

            switch(choice) {
                case 1: // Addition
                    result = num1 + num2;
                    printf("Result: %d + %d = %d\n", num1, num2, result);
                    break;
                case 2: // Subtraction
                    result = num1 - num2;
                    printf("Result: %d - %d = %d\n", num1, num2, result);
                    break;
                case 3: // Multiplication
                    result = num1 * num2;
                    printf("Result: %d * %d = %d\n", num1, num2, result);
                    break;
                case 4: // Division
                    if (num2 != 0) {
                        result = num1 / num2;
                        printf("Result: %d / %d = %d\n", num1, num2, result);
                    } else {
                        printf("Error: Division by zero is not allowed.\n");
                    }
                    break;
                case 5: // Modulus
                    if (num2 != 0) {
                        result = num1 % num2;
                        printf("Result: %d %% %d = %d\n", num1, num2, result);
                    } else {
                        printf("Error: Modulus by zero is not allowed.\n");
                    }
                    break;
            }
        } else {
            printf("Invalid choice. Please select between 1 and 5.\n");
        }

        // Ask if user wants to continue
        printf("Do you want to perform another operation? (y/n): ");
        scanf(" %c", &cont);

    } while(cont == 'y' || cont == 'Y');

    printf("Program ended.\n");
    return 0;
}
