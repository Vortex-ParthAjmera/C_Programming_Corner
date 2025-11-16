#include <stdio.h>

int main() {
    int num, original_num, remainder, digits = 0, i;
    int sum = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    original_num = num;

    // Count the number of digits
    while (num != 0) {
        digits++;
        num /= 10;
    }

    num = original_num;

    // Calculate sum of digits raised to the power digits
    while (num != 0) {
        remainder = num % 10;

        // Calculate remainder^digits using a loop
        int power = 1;
        for (i = 0; i < digits; i++) {
            power *= remainder;
        }

        sum += power;
        num /= 10;
    }

    // Compare sum with original number
    if (sum == original_num) {
        printf("%d is an Armstrong number.\n", original_num);
    } else {
        printf("%d is NOT an Armstrong number.\n", original_num);
    }

    return 0;
}
