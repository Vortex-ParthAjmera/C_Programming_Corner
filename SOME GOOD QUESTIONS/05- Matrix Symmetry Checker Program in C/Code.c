// c progrmam to check matrix is symmetric or not.
#include <stdio.h>

int main()
{
    int n, i, j, flag = 1;

    printf("Enter size of matrix: ");
    scanf("%d", &n);

    int arr[n][n];

    printf("Enter matrix elements:\n");
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &arr[i][j]);

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (arr[i][j] != arr[j][i])
            {
                flag = 0;
                break;
            }
        }
    }

    if (flag == 1)
        printf("Matrix is Symmetric");
    else
        printf("Matrix is Not symmetric");

    return 0;
}