#include <stdio.h>

int main() {
    int num, i, isPrime;

    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num < 2) {
        // Numbers less than 2 are not prime
        printf("%d is not a prime number.\n", num);
    }
    else {
        isPrime = 1; // Assume number is prime initially

        for (i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                isPrime = 0; // Found a divisor, so not prime
                break;
            }
        }

        if (isPrime) {
            printf("%d is a prime number.\n", num);
        }
        else {
            printf("%d is not a prime number.\n", num);
        }
    }

    return 0;
}
