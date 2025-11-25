#include <stdio.h>

void findMax(int arr[], int n) {
    int max = arr[0];
    for (int i = 1; i < n; i++)
        if (arr[i] > max)
            max = arr[i];
    printf("Maximum element: %d\n", max);
}

void findSecondMax(int arr[], int n) {
    int max = arr[0], secondMax = -2147483648; // INT_MIN
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            secondMax = max;
            max = arr[i];
        } else if (arr[i] > secondMax && arr[i] != max) {
            secondMax = arr[i];
        }
    }
    if (secondMax == -2147483648)
        printf("No distinct second maximum element found.\n");
    else
        printf("Second maximum element: %d\n", secondMax);
}

void findMin(int arr[], int n) {
    int min = arr[0];
    for (int i = 1; i < n; i++)
        if (arr[i] < min)
            min = arr[i];
    printf("Minimum element: %d\n", min);
}

void findSecondMin(int arr[], int n) {
    int min = arr[0], secondMin = 2147483647; // INT_MAX
    for (int i = 1; i < n; i++) {
        if (arr[i] < min) {
            secondMin = min;
            min = arr[i];
        } else if (arr[i] < secondMin && arr[i] != min) {
            secondMin = arr[i];
        }
    }
    if (secondMin == 2147483647)
        printf("No distinct second minimum element found.\n");
    else
        printf("Second minimum element: %d\n", secondMin);
}

int main() {
    int n, choice;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("Enter value at index %d: ", i);
        scanf("%d", &arr[i]);
    }

    printf("Choose an option:\n");
    printf("1. Find maximum element\n");
    printf("2. Find second maximum element\n");
    printf("3. Find minimum element\n");
    printf("4. Find second minimum element\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            findMax(arr, n);
            break;
        case 2:
            findSecondMax(arr, n);
            break;
        case 3:
            findMin(arr, n);
            break;
        case 4:
            findSecondMin(arr, n);
            break;
        default:
            printf("Invalid choice!\n");
    }

    return 0;
}
