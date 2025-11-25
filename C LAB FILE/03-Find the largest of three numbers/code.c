 #include <stdio.h>

int main(){
    float a, b, c;
    printf("Enter three numbers: ");
    scanf("%f %f %f", &a, &b, &c);
    if(a >= b && a >= c){
        printf("%.2f is the largest number.\n", a);
    } else if(b >= a && b >= c){
        printf("%.2f is the largest number.\n", b);
    } else {
        printf("%.2f is the largest number.\n", c);
    }
    
    return 0;
}