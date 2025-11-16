#include <stdio.h>

int main() {
    int num, originalNum, reversedNum = 0, remainder;

    printf("Enter an integer number: ");
    scanf("%d", &num);

    originalNum = num;  // Store the original number

    // Loop to reverse the number
    while (num > 0) {
        remainder = num % 10;             // Extract last digit
        reversedNum = reversedNum * 10 + remainder;  // Append digit
        num = num / 10;                   // Remove last digit
    }

    // Compare original number and reversed number
    if (originalNum == reversedNum) {
        printf("%d is a palindrome number.\n", originalNum);
    } else {
        printf("%d is not a palindrome number.\n", originalNum);
    }

    return 0;
}
