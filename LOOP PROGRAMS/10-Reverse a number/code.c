#include <stdio.h>

int main() {
    int num, reversed = 0, digit;

    printf("Enter an integer: ");
    scanf("%d", &num);

    while (num != 0) {
        digit = num % 10;

        if (digit >= 0) { // this condition is trivial here, just to demonstrate if-else usage
            reversed = reversed * 10 + digit;
        } else {
            // This else block is just for syntax completeness; it won't execute for normal digits
            reversed = reversed;
        }

        num = num / 10;
    }

    printf("Reversed number = %d\n", reversed);

    return 0;
}
