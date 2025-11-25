#include <stdio.h>

// Function to increment value using pointer
void increment(int *p) {
    (*p)++;  // Dereference pointer and increment value
}

// Function to swap two integers using pointers
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 10, y = 20;

    printf("Before increment: x = %d\n", x);
    increment(&x);  // Pass address of x
    printf("After increment: x = %d\n", x);

    printf("Before swap: x = %d, y = %d\n", x, y);
    swap(&x, &y);   // Pass addresses of x and y
    printf("After swap: x = %d, y = %d\n", x, y);

    // Pointer arithmetic example
    int arr[] = {1, 2, 3};
    int *ptr = arr;

    printf("Array elements by pointer arithmetic:\n");
    for (int i = 0; i < 3; i++) {
        printf("%d ", *(ptr + i));  // Access elements by pointer offset
    }
    printf("\n");

    return 0;
}
