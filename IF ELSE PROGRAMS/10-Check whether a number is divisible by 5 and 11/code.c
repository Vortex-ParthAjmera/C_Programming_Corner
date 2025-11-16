#include <stdio.h>

int main(){
    int a;
    printf("Lets check wheather a number is divisible by 5 and 11, \nEnter a number: ");
    scanf("%d", &a);
    if(a % 5 == 0 && a % 11 == 0){
        printf("%d is divisible by both 5 and 11\n", a);
    } else {
        printf("%d is not divisible by both 5 and 11\n", a);
    }
    return 0;
}