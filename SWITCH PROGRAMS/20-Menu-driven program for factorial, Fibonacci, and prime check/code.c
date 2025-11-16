#include <stdio.h>

int main() {
    int choice;
    do {
        printf("\nMenu:\n");
        printf("1. Calculate Factorial\n");
        printf("2. Generate Fibonacci Series\n");
        printf("3. Check Prime\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: {
                // Factorial calculation
                int n, i;
                unsigned long long fact = 1;

                printf("Enter a non-negative integer: ");
                scanf("%d", &n);
                if (n < 0) {
                    printf("Factorial is not defined for negative numbers.\n");
                } else {
                    for (i = 1; i <= n; ++i) {
                        fact *= i;
                    }
                    printf("Factorial of %d = %llu\n", n, fact);
                }
                break;
            }

            case 2: {
                // Fibonacci series generation
                int terms, i;
                unsigned long long t1 = 0, t2 = 1, nextTerm;

                printf("Enter number of terms (positive integer): ");
                scanf("%d", &terms);
                if (terms <= 0) {
                    printf("Please enter a positive integer.\n");
                } else {
                    printf("Fibonacci Series: ");
                    for (i = 1; i <= terms; ++i) {
                        printf("%llu ", t1);
                        nextTerm = t1 + t2;
                        t1 = t2;
                        t2 = nextTerm;
                    }
                    printf("\n");
                }
                break;
            }

            case 3: {
                // Prime check
                int num, i, isPrime = 1;

                printf("Enter an integer: ");
                scanf("%d", &num);
                if (num <= 1) {
                    isPrime = 0;
                } else {
                    for (i = 2; i*i <= num; ++i) {
                        if (num % i == 0) {
                            isPrime = 0;
                            break;
                        }
                    }
                }

                if (isPrime) {
                    printf("%d is a prime number.\n", num);
                } else {
                    printf("%d is not a prime number.\n", num);
                }
                break;
            }

            case 4:
                printf("Exiting program.\n");
                break;

            default:
                printf("Invalid choice, please try again.\n");
        }
    } while (choice != 4);

    return 0;
}
