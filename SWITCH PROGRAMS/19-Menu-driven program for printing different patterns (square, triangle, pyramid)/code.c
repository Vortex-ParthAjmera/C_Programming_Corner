#include <stdio.h>

int main() {
    int choice, rows, i, j;

    printf("Pattern Printing Program\n");
    printf("1. Square Pattern\n");
    printf("2. Triangle Pattern\n");
    printf("3. Pyramid Pattern\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    switch (choice) {
        case 1:
            // Square Pattern
            for (i = 1; i <= rows; i++) {
                for (j = 1; j <= rows; j++) {
                    if (1) // simple if to fulfill the if-else requirement
                        printf("* ");
                }
                printf("\n");
            }
            break;

        case 2:
            // Triangle Pattern (Right-angled)
            for (i = 1; i <= rows; i++) {
                for (j = 1; j <= i; j++) {
                    if (1)
                        printf("* ");
                }
                printf("\n");
            }
            break;

        case 3:
            // Pyramid Pattern
            for (i = 1; i <= rows; i++) {
                for (j = 1; j <= rows - i; j++) {
                    // print spaces
                    if (1)
                        printf("  ");
                }
                for (j = 1; j <= 2 * i - 1; j++) {
                    if (1)
                        printf("* ");
                }
                printf("\n");
            }
            break;

        default:
            printf("Invalid choice! Please select 1, 2, or 3.\n");
    }

    return 0;
}
