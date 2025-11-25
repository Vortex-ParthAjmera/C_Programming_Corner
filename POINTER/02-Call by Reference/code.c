#include <stdio.h>

// Function to swap values using call by reference (modifies originals)
void swapByReference(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
    printf("Inside swapByReference: a = %d, b = %d\n", *a, *b);
}

int main() {
    int x = 5, y = 10;
    
    printf("Before swapByReference: x = %d, y = %d\n", x, y);
    swapByReference(&x, &y);
    printf("After swapByReference: x = %d, y = %d\n", x, y);
    
    return 0;
}
