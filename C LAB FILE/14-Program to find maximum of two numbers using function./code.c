#include <stdio.h>
int max(int *a,int *b){
    if(*a>*b){
        return *a;
    }
    else{
        return *b;
    }
}
int main(){
    int num1,num2;
    printf("Enter two numbers: ");
    scanf("%d %d",&num1,&num2);
    int maximum = max(&num1,&num2);
    printf("The maximum number is: %d\n",maximum);
    return 0;
}