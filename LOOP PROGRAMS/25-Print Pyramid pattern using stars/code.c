#include <stdio.h>

int main() {
    int i, j, n, choice;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    printf("Choose pattern to print:\n");
    printf("1. Normal Pyramid\n");
    printf("2. Inverted Pyramid\n");
    printf("Enter choice (1 or 2): ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            // Normal pyramid
            for (i = 1; i <= n; i++) {
                for (j = i; j < n; j++) {
                    printf(" ");
                }
                for (j = 1; j <= 2*i - 1; j++) {
                    printf("*");
                }
                printf("\n");
            }
            break;

        case 2:
            // Inverted pyramid
            for (i = n; i >= 1; i--) {
                for (j = n; j > i; j--) {
                    printf(" ");
                }
                for (j = 1; j <= 2*i - 1; j++) {
                    printf("*");
                }
                printf("\n");
            }
            break;

        default:
            printf("Invalid choice!\n");
    }

    return 0;
}
