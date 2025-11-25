#include <stdio.h>

int main() {
    int n;

    printf("Enter size of square matrix: ");
    scanf("%d", &n);

    int matrix[n][n];

    printf("Enter elements of matrix:\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &matrix[i][j]);

    printf("Primary diagonal elements: ");
    for (int i = 0; i < n; i++)
        printf("%d ", matrix[i][i]);
    printf("\n");

    printf("Secondary diagonal elements: ");
    for (int i = 0; i < n; i++)
        printf("%d ", matrix[i][n - 1 - i]);
    printf("\n");

    return 0;
}
