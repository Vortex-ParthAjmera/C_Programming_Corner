// Program to check driving eligibility based on age
// Author: Parth Ajmera

#include <stdio.h>

int main() {
    int age;
    
    printf("Enter your age: ");
    scanf("%d", &age);
    
    if (age >= 18) {
        printf("You are eligible to drive.\n");
    } else {
        printf("You are not eligible to drive.\n");
    }
    
    return 0;
}
