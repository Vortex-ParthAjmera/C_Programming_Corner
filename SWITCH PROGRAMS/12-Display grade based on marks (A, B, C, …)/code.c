#include <stdio.h>

int main() {
    int marks;

    printf("Enter the marks obtained (0-100): ");
    scanf("%d", &marks);

    if (marks < 0 || marks > 100) {
        printf("Invalid marks! Please enter marks between 0 and 100.\n");
    } else {
        switch (marks / 10) {
            case 10:  // for marks == 100
            case 9:
                printf("Grade: A\n");
                break;
            case 8:
                printf("Grade: B\n");
                break;
            case 7:
                printf("Grade: C\n");
                break;
            case 6:
                printf("Grade: D\n");
                break;
            case 5:
                printf("Grade: E\n");
                break;
            case 4:
                printf("Grade: E--\n");
                break;
            default:
                printf("Grade: F\n");
                break;
        }
    }

    return 0;
}
