#include <stdio.h>

int main() {
    int m, n;

    printf("Enter number of rows: ");
    scanf("%d", &m);

    printf("Enter number of columns: ");
    scanf("%d", &n);

    int matrix[m][n], transpose[n][m];

    printf("Enter elements of matrix:\n");
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &matrix[i][j]);

    // Compute transpose
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            transpose[j][i] = matrix[i][j];

    printf("Transpose of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
            printf("%d ", transpose[i][j]);
        printf("\n");
    }

    return 0;
}
