#include <stdio.h>

int main() {
    int n, i, evenCount = 0, oddCount = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    for (i = 0; i < n; i++) {
        printf("Enter value at index %d: ", i);
        scanf("%d", &arr[i]);
    }

    printf("Even numbers are: ");
    for (i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            printf("%d ", arr[i]);
            evenCount++;
        }
    }

    printf("\nOdd numbers are: ");
    for (i = 0; i < n; i++) {
        if (arr[i] % 2 != 0) {
            printf("%d ", arr[i]);
            oddCount++;
        }
    }

    printf("\nTotal even numbers = %d\n", evenCount);
    printf("Total odd numbers = %d\n", oddCount);

    return 0;
}
