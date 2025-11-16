#include <stdio.h>

int main() {
    int N, i;
    int sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &N);

    if (N > 0) {
        for (i = 1; i <= N; i++) {
            sum = sum + i * i;
        }
        printf("Sum of squares of first %d natural numbers is: %d\n", N, sum);
    } else {
        // If input is not positive, show error message
        printf("Please enter a positive integer.\n");
    }

    return 0;
}
