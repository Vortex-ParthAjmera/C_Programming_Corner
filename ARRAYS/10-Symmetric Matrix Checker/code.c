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

    int is_symmetric = 1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (mat[i][j] != mat[j][i]) {
                is_symmetric = 0;
                break;
            }
        }
        if (!is_symmetric) break;
    }

    if (is_symmetric)
        printf("The matrix is symmetric.");
    else
        printf("The matrix is not symmetric.");

    return 0;
}