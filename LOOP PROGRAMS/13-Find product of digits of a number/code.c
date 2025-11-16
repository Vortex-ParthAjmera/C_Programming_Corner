#include <stdio.h>

int main() {
    int num, product = 1, digit;

    printf("Enter an integer: ");
    scanf("%d", &num);

    // Handle negative numbers by making them positive
    if (num < 0) {
        num = -num;
    }

    // If the number is zero, product is zero
    if (num == 0) {
        product = 0;
    } else {
        // Loop to extract digits and multiply
        while (num > 0) {
            digit = num % 10;
            product = product * digit;
            num = num / 10;
        }
    }

    printf("Product of the digits is: %d\n", product);

    return 0;
}
