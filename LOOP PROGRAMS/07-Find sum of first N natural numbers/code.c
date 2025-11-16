#include <stdio.h>

int main() {
    int N, sum = 0;

    printf("Enter a positive integer N: ");
    scanf("%d", &N);

    if (N > 0) {
        for (int i = 1; i <= N; i++) {
            sum += i;
        }
        printf("Sum of first %d natural numbers is: %d\n", N, sum);
    } else {
        printf("Invalid input! Please enter a positive integer.\n");
    }

    return 0;
}
