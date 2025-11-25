#include <stdio.h>

// Function to check if a number is prime
int isPrime(int num) {
    if (num <= 1) return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}

// Function to print prime numbers till n
void printPrimes(int n) {
    int i;
    printf("Prime numbers up to %d are:\n", n);
    for (i = 2; i <= n; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    int n;
    printf("Enter the limit n: ");
    scanf("%d", &n);
    printPrimes(n);
    return 0;
}
