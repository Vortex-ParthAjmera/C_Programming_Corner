#include <stdio.h>

int main() {
    int marks;

    printf("Enter the marks obtained by the student: ");
    scanf("%d", &marks);

    if (marks < 0 || marks > 100) {
        printf("Invalid marks entered. Please enter marks between 0 and 100.\n");
    }
    else if (marks < 50) {
        printf("Grade: F\n");
    }
    else if (marks < 60) {
        printf("Grade: D\n");
    }
    else if (marks < 70) {
        printf("Grade: C\n");
    }
    else if (marks < 80) {
        printf("Grade: B\n");
    }
    else if (marks < 90) {
        printf("Grade: A\n");
    }
    else {
        printf("Grade: A+\n");
    }

    return 0;
}
