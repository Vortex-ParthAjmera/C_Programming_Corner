#include <stdio.h>

struct Student {
    int id;
    char name[50];
    int age;
    float marks;
};

int main() {
    struct Student student;

    printf("Enter student ID: ");
    scanf("%d", &student.id);

    while (getchar() != '\n');

    printf("Enter student name: ");
    fgets(student.name, sizeof(student.name), stdin);

    int i = 0;
    while (student.name[i] != '\0') {
        if (student.name[i] == '\n') {
            student.name[i] = '\0';
            break;
        }
        i++;
    }

    printf("Enter student age: ");
    scanf("%d", &student.age);

    printf("Enter student marks: ");
    scanf("%f", &student.marks);

    printf("\nStudent Details:\n");
    printf("ID: %d\n", student.id);
    printf("Name: %s\n", student.name);
    printf("Age: %d\n", student.age);
    printf("Marks: %.2f\n", student.marks);

    return 0;
}
