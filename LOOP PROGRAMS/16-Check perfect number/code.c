#include <stdio.h>

int main() {
    int num, i, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Check if the input is positive
    if (num <= 0) {
        printf("Please enter a positive integer.\n");
    } else {
        // Loop to find and sum proper divisors
        for (i = 1; i < num; i++) {
            if (num % i == 0) {
                sum += i;
            }
        }

        if (sum == num) {
            printf("%d is a perfect number.\n", num);
        } else {
            printf("%d is not a perfect number.\n", num);
        }
    }

    return 0;
}
