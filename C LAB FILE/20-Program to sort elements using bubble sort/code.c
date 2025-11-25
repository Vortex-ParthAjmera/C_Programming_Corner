#include <stdio.h>

void bubble_sort(int arr[], int n) {
    int i, j, tmp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }
}

int main(void) {
    int n, i;
    printf("Enter number of elements: ");
    if (scanf("%d", &n) != 1 || n <= 0) return 0;
    int arr[n];
    for (i = 0; i < n; i++) scanf("%d", &arr[i]);

    bubble_sort(arr, n);

    for (i = 0; i < n; i++) {
        if (i) putchar(' ');
        printf("%d", arr[i]);
    }
    return 0;
}