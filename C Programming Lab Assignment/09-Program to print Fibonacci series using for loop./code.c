#include <stdio.h>

int main() {
    int n, i;
    int a = 0, b = 1, nextTerm;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series up to %d terms:\n", n);

    for (i = 1; i <= n; i++) {
        if (i == 1) {
            printf("%d ", a);
        } else if (i == 2) {
            printf("%d ", b);
        } else {
            nextTerm = a + b;
            printf("%d ", nextTerm);
            a = b;
            b = nextTerm;
        }
    }

    return 0;
}
