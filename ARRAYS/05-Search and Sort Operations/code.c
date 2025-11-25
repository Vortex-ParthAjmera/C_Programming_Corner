#include <stdio.h>

// Linear search function
int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) 
            return i;
    }
    return -1;
}

// Bubble sort function
void bubbleSort(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-1-i; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j]; 
                arr[j] = arr[j + 1]; 
                arr[j + 1] = temp;
            }
        }
    }
}

// Binary search function (array must be sorted)
int binarySearch(int arr[], int n, int key) {
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = low + (high - low)/2;
        if (arr[mid] == key)
            return mid;
        else if (arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

int main() {
    int n, choice, key;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("Enter value at index %d: ", i);
        scanf("%d", &arr[i]);
    }

    printf("Choose an option:\n");
    printf("1. Linear Search\n");
    printf("2. Binary Search (array must be sorted)\n");
    printf("3. Bubble Sort\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Enter element to search for: ");
            scanf("%d", &key);
            {
                int pos = linearSearch(arr, n, key);
                if (pos == -1)
                    printf("Element not found in array.\n");
                else
                    printf("Element found at index %d.\n", pos);
            }
            break;

        case 2:
            printf("Enter element to search for: ");
            scanf("%d", &key);
            // Assuming user knows to enter sorted array for binary search
            {
                int pos = binarySearch(arr, n, key);
                if (pos == -1)
                    printf("Element not found in array.\n");
                else
                    printf("Element found at index %d.\n", pos);
            }
            break;

        case 3:
            bubbleSort(arr, n);
            printf("Array after bubble sort:\n");
            for (int i = 0; i < n; i++) {
                printf("%d ", arr[i]);
            }
            printf("\n");
            break;

        default:
            printf("Invalid choice!\n");
    }

    return 0;
}
