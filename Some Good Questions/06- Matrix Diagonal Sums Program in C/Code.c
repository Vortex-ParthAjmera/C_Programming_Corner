#include <stdio.h>

int main()
{
    int n, i, j;
    int diag = 0, anti = 0;

    printf("Enter size of matrix: ");
    scanf("%d", &n);

    int arr[n][n];

    printf("Enter matrix elements:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for (i = 0; i < n; i++)
    {
        diag += arr[i][i]; 
        anti += arr[i][n - 1 - i];
    }

    printf("Sum of diagonal = %d\n", diag);
    printf("Sum of anti-diagonal = %d\n", anti);

    return 0;
}