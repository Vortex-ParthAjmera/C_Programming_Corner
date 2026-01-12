#include<stdio.h>
int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int num, onum, sum = 0;

    printf("Enter a number to check if a number is a Strong number or not: ");
    scanf("%d", &num);
    onum = num;
    while (num > 0) {
        int digit = num % 10;
        sum += factorial(digit);
        num /= 10;
    }

    if (sum == onum)
        printf("%d is a Strong Number.\n", onum);
    else
        printf("%d is NOT a Strong Number.\n", onum);

    return 0;
}