#include <stdio.h>

int sum_array(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; ++i)
        sum += arr[i];
    return sum;
}

double average_array(int arr[], int n) {
    if (n == 0) return 0.0;
    return (double)sum_array(arr, n) / n;
}

int main(void) {
    int n;

    printf("Enter the number of elements: ");
    if (scanf("%d", &n) != 1 || n < 0) {
        printf("Invalid input. Number of elements must be a non-negative integer.\n");
        return 1;
    }

    if (n == 0) {
        printf("No elements to process.\n");
        return 0;
    }

    int arr[n];
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; ++i) {
        if (scanf("%d", &arr[i]) != 1) {
            printf("Invalid input detected. Setting element %d to 0.\n", i);
            arr[i] = 0;
        }
    }

    int sum = sum_array(arr, n);
    double avg = average_array(arr, n);

    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", avg);

    return 0;
}