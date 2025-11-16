#include <stdio.h>

int main() {
    int num, i = 1;

    printf("Enter an integer: ");
    scanf("%d", &num);

    printf("Multiplication Table of %d using switch:\n", num);

    while (i <= 10) {
        switch(i) {
            case 1: printf("%d x 1 = %d\n", num, num * 1); break;
            case 2: printf("%d x 2 = %d\n", num, num * 2); break;
            case 3: printf("%d x 3 = %d\n", num, num * 3); break;
            case 4: printf("%d x 4 = %d\n", num, num * 4); break;
            case 5: printf("%d x 5 = %d\n", num, num * 5); break;
            case 6: printf("%d x 6 = %d\n", num, num * 6); break;
            case 7: printf("%d x 7 = %d\n", num, num * 7); break;
            case 8: printf("%d x 8 = %d\n", num, num * 8); break;
            case 9: printf("%d x 9 = %d\n", num, num * 9); break;
            case 10: printf("%d x 10 = %d\n", num, num * 10); break;
            default: break;
        }
        i++;
    }
    return 0;
}
