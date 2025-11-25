#include <stdio.h>

int main() {
    int n, i, mid;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n], temp[n];  // temp array for holding swapped result

    for (i = 0; i < n; i++) {
        printf("Enter value at index %d: ", i);
        scanf("%d", &arr[i]);
    }

    mid = n / 2;

    // If n is even, mid exactly half, else mid is floor(n/2)
    // Copy second half to temp first
    for (i = 0; i < n - mid; i++) {
        temp[i] = arr[mid + i];
    }
    // Copy first half to temp after second half
    for (i = 0; i < mid; i++) {
        temp[n - mid + i] = arr[i];
    }

    printf("Array after swapping halves:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", temp[i]);
    }
    printf("\n");

    return 0;
}
