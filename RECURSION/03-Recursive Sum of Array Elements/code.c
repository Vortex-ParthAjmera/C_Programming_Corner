#include <stdio.h>

int recursiveSum(int arr[], int n) {
    if (n == 0) return 0;
    return arr[n - 1] + recursiveSum(arr, n - 1);
}

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i);
        scanf("%d", &arr[i]);
    }

    int sum = recursiveSum(arr, n);
    printf("Sum of array elements is %d\n", sum);

    return 0;
}
