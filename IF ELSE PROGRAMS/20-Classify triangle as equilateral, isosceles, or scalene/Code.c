#include <stdio.h>

int main() {
    int s1, s2, s3;

    printf("Enter the lengths of three sides of the triangle: \n");
    scanf("%d %d %d", &s1, &s2, &s3);

    // Check validity of the triangle using triangle inequality theorem
    if (s1 <= 0 || s2 <= 0 || s3 <= 0) {
        printf("Invalid input: Side lengths must be positive integers.\n");
    } else if (s1 + s2 <= s3 || s2 + s3 <= s1 || s1 + s3 <= s2) {
        printf("Invalid triangle: The given sides do not satisfy the triangle inequality.\n");
    } else {
        if (s1 == s2 && s2 == s3) {
            printf("The triangle is Equilateral.\n");
        } 
        else if (s1 == s2 || s2 == s3 || s1 == s3) {
            printf("The triangle is Isosceles.\n");
        } 
        else {
            printf("The triangle is Scalene.\n");
        }
    }

    return 0;
}
