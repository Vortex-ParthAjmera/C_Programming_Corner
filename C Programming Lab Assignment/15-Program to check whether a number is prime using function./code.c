#include <stdio.h>
int prime(int n){
    int i, ispime=1;
    if (n <= 1) return 0;
    for (i = 2; i * i <= n; i++)
    {
        if (n % i == 0){
            ispime = 0;
            break;
        }
    }
    return ispime;
}
int main(){
    int n, result;
    printf("Enter a number: ");
    scanf("%d", &n);
    result = prime(n);
    if (result==1)
        printf("%d is a prime number.\n", n);
    else
        printf("%d is not a prime number.\n", n);
    return 0;
}