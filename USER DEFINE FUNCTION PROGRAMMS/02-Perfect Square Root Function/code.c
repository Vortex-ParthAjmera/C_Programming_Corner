#include <stdio.h>

// Function to find perfect square root, returns -1 if not perfect square
int perfectSqrt(int num) {
    if (num < 0) return -1;  // Negative numbers don't have integer square root

    for (int i = 0; i * i <= num; i++) {
        if (i * i == num) {
            return i;  // Perfect square root found
        }
    }
    return -1;  // Not a perfect square
}

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    int root = perfectSqrt(number);

    if (root == -1)
        printf("%d is not a perfect square.\n", number);
    else
        printf("Square root of %d is %d.\n", number, root);

    return 0;
}
