#include <stdio.h>

int main() {
    int N, i;
    long long sum = 0;

    printf("Enter a positive integer N: ");
    scanf("%d", &N);

    if (N > 0) {
        for (i = 1; i <= N; i++) {
            sum += (long long)i * i * i;
        }
        printf("Sum of cubes of first %d natural numbers is: %lld\n", N, sum);
    } else {
        printf("Invalid input! Please enter a positive integer.\n");
    }

    return 0;
}
