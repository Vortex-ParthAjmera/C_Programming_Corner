#include <stdio.h>

int linear_search(int arr[], int n, int key) {
    for (int i = 0; i < n; ++i)
        if (arr[i] == key) return i;  
    return -1;
}

int main(void) {
    int n;
    printf("Enter number of elements: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid size\n");
        return 0;
    }

    int arr[n];
    for (int i = 0; i < n; ++i) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    int key;
    printf("Enter element to search: ");
    scanf("%d", &key);

    int idx = linear_search(arr, n, key);
    if (idx >= 0)
        printf("Element found at index %d (position %d)\n", idx, idx + 1);
    else
        printf("Element not found\n");

    return 0;
}