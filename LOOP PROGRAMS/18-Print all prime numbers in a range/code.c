#include <stdio.h>

int main() {
    int start, end, i, j, isPrime;

    printf("Enter the start of the range: ");
    scanf("%d", &start);
    printf("Enter the end of the range: ");
    scanf("%d", &end);

    printf("Prime numbers between %d and %d are: ", start, end);

    for (i = start; i <= end; i++) {
        if (i == 0 || i == 1) {
            // 0 and 1 are not prime numbers
            continue;
        }

        isPrime = 1; // assume number is prime

        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                isPrime = 0; // number is divisible, not prime
                break;
            }
        }

        if (isPrime == 1) {
            printf("%d ", i);
        }
    }

    return 0;
}
