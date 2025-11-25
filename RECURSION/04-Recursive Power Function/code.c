#include <stdio.h>

int power(int base, int exponent) {
    if (exponent == 0)
        return 1;
    return base * power(base, exponent - 1);
}

int main() {
    int base, exponent;
    printf("Enter base: ");
    scanf("%d", &base);
    printf("Enter exponent (non-negative): ");
    scanf("%d", &exponent);

    if (exponent < 0)
        printf("Exponent should be non-negative.\n");
    else
        printf("%d^%d = %d\n", base, exponent, power(base, exponent));

    return 0;
}
