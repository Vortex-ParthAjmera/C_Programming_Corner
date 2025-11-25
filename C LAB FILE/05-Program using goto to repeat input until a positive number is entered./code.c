#include <stdio.h>

int main() {
    int num;
    
    input:
    printf("Enter a positive number: ");
    scanf("%d", &num);
    
    if (num <= 0) {
        printf("Invalid! Must be positive.\n");
        goto input;
    }
    
    printf("You entered: %d which is a positive number.\n", num);
    return 0;
}