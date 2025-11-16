#include <stdio.h>

int main() {
    int num, originalNum, remainder, count = 0, i;
    long long sum = 0, power = 1;

    printf("Enter an integer: ");
    scanf("%d", &num);

    originalNum = num;

    // Count number of digits
    while (num != 0) {
        count++;
        num /= 10;
    }

    num = originalNum;

    // Calculate sum of digits raised to the power of count
    while (num != 0) {
        remainder = num % 10;

        // Calculate remainder^count using a loop
        power = 1;
        for (i = 0; i < count; i++) {
            power *= remainder;
        }

        sum += power;
        num /= 10;
    }

    if (sum == originalNum) {
        printf("%d is an Armstrong number.\n", originalNum);
    } else {
        printf("%d is not an Armstrong number.\n", originalNum);
    }

    return 0;
}
