#include <stdio.h>

int main() {
    int num1, num2;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    if (num1 == num2) {
        // If both numbers are equal
        printf("Both numbers are equal.\n");
    } else {
        switch (num1 > num2) {
            case 1:
                printf("%d is maximum.\n", num1);
                break;
            case 0:
                printf("%d is maximum.\n", num2);
                break;
        }
    }

    return 0;
}
