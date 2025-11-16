#include <stdio.h>

int binary_search(int arr[], int n, int key) {
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == key) return mid;   
        else if (arr[mid] < key) low = mid + 1;
        else high = mid - 1;
    }
    return -1;
}

int main(void) {
    int n;
    printf("Enter number of elements: ");
    if (scanf("%d", &n) != 1 || n <= 0) return 0;

    int arr[n];
    printf("Enter %d sorted elements:\n", n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }

    int key;
    printf("Enter element to search: ");
    if (scanf("%d", &key) != 1) return 0;

    int idx = binary_search(arr, n, key);
    if (idx == -1)
        printf("Element not found\n");
    else
        printf("Element found at position %d (index %d)\n", idx + 1, idx);

    return 0;
}