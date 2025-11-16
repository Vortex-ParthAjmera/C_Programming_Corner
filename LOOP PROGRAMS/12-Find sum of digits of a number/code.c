#include <stdio.h>

int main() {
    int num, sum = 0, digit;
    printf("Enter an integer number: ");
    scanf("%d", &num);

    if (num < 0) {
        num = -num;  // Convert negative number to positive
    }

    while (num > 0) {
        digit = num % 10;  // Extract the last digit
        sum += digit;      // Add the digit to sum
        num /= 10;         // Remove the last digit
    }

    printf("Sum of digits: %d", sum);
    return 0;
}
