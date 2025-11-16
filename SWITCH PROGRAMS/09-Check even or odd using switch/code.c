#include <stdio.h>

int main() {
    int number, result;

    printf("Enter an integer: ");
    scanf("%d", &number);

    result = number % 2;

    switch (result) {
        case 0:
            printf("Number is Even.\n");
            break;
        case 1:
        case -1:  // cover negative numbers as well
            printf("Number is Odd.\n");
            break;
        default:
            printf("Unexpected result.\n");
    }

    return 0;
}
