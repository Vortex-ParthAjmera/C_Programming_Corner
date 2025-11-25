#include <stdio.h>

int main() {
    int n;
    printf("Enter the order of the square matrix: ");
    scanf("%d", &n);

    int mat[n][n];
    printf("Enter the elements of the matrix:");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &mat[i][j]);

    int sum_main = 0, sum_anti = 0;
    for (int i = 0; i < n; i++) {
        sum_main += mat[i][i];             // Main diagonal
        sum_anti += mat[i][n - i - 1];     // Anti-diagonal
    }

    printf("Sum of main diagonal elements = %d", sum_main);
    printf("Sum of anti-diagonal elements = %d", sum_anti);

    return 0;
}