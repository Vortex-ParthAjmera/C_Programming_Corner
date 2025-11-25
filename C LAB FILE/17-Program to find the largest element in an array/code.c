#include <stdio.h>

int find_largest(const int arr[], int n) {
    int largest = arr[0];
    for (int i = 1; i < n; ++i)
        if (arr[i] > largest) largest = arr[i];
    return largest;
}

int main(void) {
    int n;
    if (printf("Enter number of elements: "), fflush(stdout), scanf("%d", &n) != 1) return 1;
    if (n <= 0) {
        printf("Number of elements must be positive.\n");
        return 1;
    }

    int a[n]; 
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; ++i) {
        if (scanf("%d", &a[i]) != 1) return 1;
    }

    int largest = find_largest(a, n);
    printf("Largest element = %d\n", largest);
    return 0;
}
