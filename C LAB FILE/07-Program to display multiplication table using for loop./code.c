#include <stdio.h>

int main() {
    int num, i = 1;

    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num != 0) {
        for (i = 1; i <= 10; i++) {
            printf("%d x %d = %d\n", num, i, num * i);
            }
    } else {
        printf("Zero entered, multiplication table is trivial.\n");
    }

    return 0;
}
