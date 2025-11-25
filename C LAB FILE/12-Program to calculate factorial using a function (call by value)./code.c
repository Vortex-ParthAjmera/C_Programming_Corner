#include <stdio.h>

unsigned long long factorial(int n) {
    if (n < 0) {
        printf("Factorial not defined for negative numbers.\n");
        return 0ULL;
    }

    if (n > 20) {
        printf("Result would overflow 64-bit; please enter n <= 20.\n");
        return 0ULL;
    }

    unsigned long long fact = 1ULL;
    
    for (int i = 1; i <= n; i++) {
        fact *= (unsigned long long)i;
    }
    
    return fact;
}

int main() {
    int num;
    unsigned long long result;
    
    printf("Enter a number: ");
    if (scanf("%d", &num) != 1) {
        printf("Invalid input.\n");
        return 1;
    }
    
    result = factorial(num);
    
    if (num < 0) {
        return 0;
    }

    if (result != 0ULL || num == 0) {
        printf("Factorial of %d is: %llu\n", num, result);
    }
    
    return 0;
}