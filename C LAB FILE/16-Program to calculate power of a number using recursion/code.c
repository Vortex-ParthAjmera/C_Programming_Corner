#include <stdio.h>

int power(int base, int exp) {
    if (exp == 0) {
        return 1;
    }
    return base * power(base, exp - 1);
}

int main() {
    int base, exponent;
    
    printf("Enter base: ");
    scanf("%d", &base);
    
    printf("Enter exponent: ");
    scanf("%d", &exponent);
    
    if (exponent < 0) {
        printf("Exponent must be non-negative.\n");
        return 1;
    }
    
    int result = power(base, exponent);
    printf("%d^%d = %d\n", base, exponent, result);
    
    return 0;
}