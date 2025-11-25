#include <stdio.h>

int main() {
    int m1, n1, m2, n2;
    int choice;

    // Input first matrix size
    printf("Enter rows and columns for first matrix: ");
    scanf("%d %d", &m1, &n1);

    int matrix1[m1][n1];
    printf("Enter elements of first matrix:\n");
    for (int i = 0; i < m1; i++)
        for (int j = 0; j < n1; j++)
            scanf("%d", &matrix1[i][j]);

    // Input second matrix size
    printf("Enter rows and columns for second matrix: ");
    scanf("%d %d", &m2, &n2);

    int matrix2[m2][n2];
    printf("Enter elements of second matrix:\n");
    for (int i = 0; i < m2; i++)
        for (int j = 0; j < n2; j++)
            scanf("%d", &matrix2[i][j]);

    printf("Choose matrix operation:\n");
    printf("1. Addition\n2. Subtraction\n3. Multiplication\nEnter choice: ");
    scanf("%d", &choice);

    int result[m1][n2]; // Result matrix max size after multiplication

    switch (choice) {
        case 1: // Addition
            if (m1 != m2 || n1 != n2) {
                printf("Matrices dimensions must be same for addition.\n");
                break;
            }
            printf("Sum of matrices:\n");
            for (int i = 0; i < m1; i++) {
                for (int j = 0; j < n1; j++) {
                    result[i][j] = matrix1[i][j] + matrix2[i][j];
                    printf("%d ", result[i][j]);
                }
                printf("\n");
            }
            break;

        case 2: // Subtraction
            if (m1 != m2 || n1 != n2) {
                printf("Matrices dimensions must be same for subtraction.\n");
                break;
            }
            printf("Difference of matrices:\n");
            for (int i = 0; i < m1; i++) {
                for (int j = 0; j < n1; j++) {
                    result[i][j] = matrix1[i][j] - matrix2[i][j];
                    printf("%d ", result[i][j]);
                }
                printf("\n");
            }
            break;

        case 3: // Multiplication
            if (n1 != m2) {
                printf("Number of columns of first matrix must be equal to number of rows of second matrix for multiplication.\n");
                break;
            }
            // Initialize result matrix to zero
            for (int i = 0; i < m1; i++)
                for (int j = 0; j < n2; j++)
                    result[i][j] = 0;

            // Multiply matrices
            for (int i = 0; i < m1; i++) {
                for (int j = 0; j < n2; j++) {
                    for (int k = 0; k < n1; k++) {
                        result[i][j] += matrix1[i][k] * matrix2[k][j];
                    }
                }
            }
            printf("Product of matrices:\n");
            for (int i = 0; i < m1; i++) {
                for (int j = 0; j < n2; j++) {
                    printf("%d ", result[i][j]);
                }
                printf("\n");
            }
            break;

        default:
            printf("Invalid choice!\n");
    }

    return 0;
}
