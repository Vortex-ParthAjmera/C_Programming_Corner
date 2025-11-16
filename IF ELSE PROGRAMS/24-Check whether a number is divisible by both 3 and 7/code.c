#include <stdio.h>

int main() {
    int num;
    
    printf("Enter an integer: ");
    scanf("%d", &num);
    
    if (num % 3 == 0 && num % 7 == 0) {
        printf("%d is divisible by both 3 and 7.\n", num);
    } else {
        printf("%d is not divisible by both 3 and 7.\n", num);
    }
    
    return 0;
}
