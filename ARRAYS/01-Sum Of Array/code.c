#include <stdio.h>

int main() {
    int n, sum = 0, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    for (i = 0; i < n; i++) {
        printf("Enter value at index %d: ", i);
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        sum += arr[i];
    }

    printf("Sum of array elements = %d\n", sum);

    return 0;
}
