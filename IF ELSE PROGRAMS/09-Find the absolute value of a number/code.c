#include <stdio.h>

int main() {
    int num, absoluteValue;

    printf("Enter an integer: ");
    scanf("%d", &num);

    // Check if the number is negative
    if (num < 0) {
        absoluteValue = -num;  // Multiply by -1 to get positive value
    } else {
        absoluteValue = num;   // Number is already positive or zero
    }

    printf("Absolute value: %d\n", absoluteValue);

    return 0;
}
