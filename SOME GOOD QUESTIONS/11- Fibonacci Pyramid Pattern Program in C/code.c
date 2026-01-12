#include <stdio.h>

int main() {
    int rows, i, j, a = 0, b = 1, c;
    
    printf("Enter number of rows for pyramid: ");
    scanf("%d", &rows);
    
    for (i = 1; i <= rows; i++) {
        // Print i Fibonacci numbers in row i
        for (j = 1; j <= i; j++) {
            printf("%d ", a);
            c = a + b;
            a = b;
            b = c;
        }
        printf("\n");
    }
    
    return 0;
}
