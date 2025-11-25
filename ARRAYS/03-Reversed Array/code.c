#include <stdio.h>

int main() {
    int n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    
    for (i = 0; i < n; i++) {
        printf("Enter value at index %d: ", i);
        scanf("%d", &arr[i]);
    }

    printf("Array in reversed order:\n");
    for (i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
