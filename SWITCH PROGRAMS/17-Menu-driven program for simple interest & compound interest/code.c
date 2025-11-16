#include <stdio.h>

// User-defined function to calculate base^exponent for double exponent (only supports positive integer exponents)
double power(double base, int exponent) {
    double result = 1.0;
    for (int i = 0; i < exponent; i++) {
        result *= base;
    }
    return result;
}

int main() {
    int choice;
    double principal, rate, time;
    double interest, total_amount;


    printf("Interest Calculator Menu:\n");
    printf("1. Simple Interest\n");
    printf("2. Compound Interest\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);


    if (choice != 1 && choice != 2) {
        printf("Invalid choice! Please select 1 or 2.\n");
        return 1;
    }


    printf("Enter principal amount: ");
    scanf("%lf", &principal);
    if (principal <= 0) {
        printf("Principal amount must be positive.\n");
        return 1;
    }


    printf("Enter rate of interest (in %%): ");
    scanf("%lf", &rate);
    if (rate <= 0) {
        printf("Rate of interest must be positive.\n");
        return 1;
    }


    printf("Enter time period (in years): ");
    scanf("%lf", &time);
    if (time <= 0) {
        printf("Time period must be positive.\n");
        return 1;
    }


    switch (choice) {
        case 1: // Simple Interest
            interest = (principal * rate * time) / 100.0;
            total_amount = principal + interest;
            printf("Simple Interest = %.2lf\n", interest);
            printf("Total Amount = %.2lf\n", total_amount);
            break;


        case 2: // Compound Interest
            // time is double, for simplicity, only handle integer part here
            // modify time casting to int for power function
            interest = principal * (power((1 + rate / 100.0), (int)time) - 1);
            total_amount = principal + interest;
            printf("Compound Interest = %.2lf\n", interest);
            printf("Total Amount = %.2lf\n", total_amount);
            break;


        default:
            printf("Invalid choice.\n");
    }


    return 0;
}
