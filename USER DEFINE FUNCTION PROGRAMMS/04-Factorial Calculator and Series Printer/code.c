#include <stdio.h>

// Factorial function
unsigned long long factorial(int n) {
    unsigned long long fact = 1;
    int i;
    for (i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}
int main() {
    int choice, n, i;

    printf("Choose an option:\n");
    printf("1. Calculate factorial of a number\n");
    printf("2. Print factorial series up to a number\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Enter a number to find its factorial: ");
            scanf("%d", &n);
            if (n < 0)
                printf("Factorial is not defined for negative numbers.\n");
            else
                printf("Factorial of %d is %llu\n", n, factorial(n));
            break;

        case 2:
            printf("Enter a number to print factorial series up to: ");
            scanf("%d", &n);
            if (n < 0)
                printf("Factorial series is not defined for negative numbers.\n");
            else {
                printf("Factorial series up to %d:\n", n);
                for (i = 1; i <= n; i++) {
                    printf("%d! = %llu\n", i, factorial(i));
                }
            }
            break;

        default:
            printf("Invalid choice!\n");
    }

    return 0;
}
