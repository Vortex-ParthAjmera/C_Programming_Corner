#include <stdio.h>

void SortAscen(int arr[], int n) {
    int i, j, temp;
    for(i = 0; i < n-1; i++) {
        for(j = 0; j < n-1-i; j++) {
            if(arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

void SortDescen(int arr[], int n) {
    int i, j, temp;
    for(i = 0; i < n-1; i++) {
        for(j = 0; j < n-1-i; j++) {
            if(arr[j] < arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main() {
    int n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n], copy[n];

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        copy[i] = arr[i]; 
    }

    printf("\nOriginal Array: ");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);

    SortAscen(arr, n);
    printf("\nSorted Ascending: ");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);

    SortDescen(copy, n);
    printf("\nSorted Descending: ");
    for(i = 0; i < n; i++)
        printf("%d ", copy[i]);


    return 0;
}