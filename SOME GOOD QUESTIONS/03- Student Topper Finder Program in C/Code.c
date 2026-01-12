#include <stdio.h>

struct student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct student s[5];
    int i, topperIndex = 0;

    printf("Enter details of 5 students:\n");
    for(i = 0; i < 5; i++) {
        printf("\nStudent %d:\n", i + 1);

        printf("Enter name: ");
        scanf("%s", s[i].name);

        printf("Enter roll number: ");
        scanf("%d", &s[i].roll);

        printf("Enter marks: ");
        scanf("%f", &s[i].marks);
    }

    for(i = 1; i < 5; i++) {
        if(s[i].marks > s[topperIndex].marks) {
            topperIndex = i;
        }
    }

    printf("\n----- Topper Details -----\n");
    printf("Name : %s\n", s[topperIndex].name);
    printf("Roll : %d\n", s[topperIndex].roll);
    printf("Marks: %.2f\n", s[topperIndex].marks);

    return 0;
}