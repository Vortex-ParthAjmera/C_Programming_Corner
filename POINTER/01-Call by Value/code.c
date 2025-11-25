#include <stdio.h>

// Function to swap values using call by value (will not affect originals)
void swapByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    printf("Inside swapByValue: a = %d, b = %d\n", a, b);
}

int main() {
    int x = 5, y = 10;
    
    printf("Before swapByValue: x = %d, y = %d\n", x, y);
    swapByValue(x, y);
    printf("After swapByValue: x = %d, y = %d\n", x, y);
    
    return 0;
}
