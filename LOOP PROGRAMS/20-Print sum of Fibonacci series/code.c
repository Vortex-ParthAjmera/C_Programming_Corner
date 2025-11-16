#include <stdio.h>

int main() {
    int n, i;
    int fib1 = 0, fib2 = 1, nextFib;
    int sum = 0;

    printf("Enter the number of Fibonacci terms to sum: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive integer.\n");
    } else if (n == 1) {
        // sum is just the first term
        sum = fib1;
        printf("Sum of first %d Fibonacci term: %d\n", n, sum);
    } else {
        // sum starts with first two terms
        sum = fib1 + fib2;
        for (i = 3; i <= n; i++) {
            nextFib = fib1 + fib2;
            sum += nextFib;

            fib1 = fib2;
            fib2 = nextFib;
        }
        printf("Sum of first %d Fibonacci terms: %d\n", n, sum);
    }

    return 0;
}
