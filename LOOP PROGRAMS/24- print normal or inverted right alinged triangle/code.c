#include <stdio.h>

int main() {
    int i, j, n, choice;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    printf("Choose pattern to print:\n");
    printf("1. Normal Triangle\n");
    printf("2. Inverted Triangle\n");
    printf("Enter choice (1 or 2): ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            // Normal triangle
            for (i = 1; i <= n; i++) {
                for (j = 1; j <= i; j++) {
                    printf("*");
                }
                printf("\n");
            }
            break;

        case 2:
            // Inverted triangle
            for (i = n; i >= 1; i--) {
                for (j = 1; j <= i; j++) {
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
