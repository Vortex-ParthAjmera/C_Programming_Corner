#include <stdio.h>

int main() {
    int num, i;
    int isPerfectSquare = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num < 0) {
        // Negative numbers cannot be perfect squares
        printf("%d is not a perfect square.\n", num);
    } else {
        for (i = 0; i * i <= num; i++) {
            if (i * i == num) {
                isPerfectSquare = 1;
                break;
            }
        }

        if (isPerfectSquare) {
            printf("%d is a perfect square.\n", num);
        } else {
            printf("%d is not a perfect square.\n", num);
        }
    }

    return 0;
}
