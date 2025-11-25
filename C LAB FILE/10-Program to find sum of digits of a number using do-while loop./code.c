#include <stdio.h>

int main() {
    int num, sum = 0, digit;
    printf("Enter an integer number: ");
    scanf("%d", &num);

    if (num < 0) {
        num = -num; 
    }

    do {
        digit = num % 10;  
        sum += digit;      
        num /= 10;         
    } while (num > 0);

    printf("Sum of digits: %d", sum);
    return 0;
}
