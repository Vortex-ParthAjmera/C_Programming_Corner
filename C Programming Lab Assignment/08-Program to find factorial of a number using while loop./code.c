#include <stdio.h>

int main() {
    int num, i;
    unsigned long long factorial = 1;

    printf("Enter a non-negative integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else if (num == 0) {
        printf("Factorial of 0 is 1.\n");
    } else {
        i = 1;
        while (i <= num) {
            factorial *= i;
        }
        printf("Factorial of %d is %llu.\n", num, factorial);
    }

    return 0;
}
