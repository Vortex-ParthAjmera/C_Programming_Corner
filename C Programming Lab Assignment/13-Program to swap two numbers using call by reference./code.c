#include <stdio.h>
int swap(int *a,int *b){
    int temp;
    temp = *a;
    *a = *b ;
    *b = temp;
}
int main() {
    printf("Enter two numbers to swap: ");
    int x, y;
    scanf("%d %d", &x, &y);
    printf("Before swapping: x = %d, y = %d\n", x, y);
    swap(&x, &y);
    printf("After swapping: x = %d, y = %d\n", x, y);
    return 0;
}