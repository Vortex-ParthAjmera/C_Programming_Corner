#include <stdio.h>
#include <string.h>

// Nested structure
struct Date {
    int day, month, year;
};

// Main structure with nested and array members
struct Student {
    int id;
    char name[50];
    struct Date dob;
    float marks[5];
};

// Function to print student info (using pointer to struct)
void printStudent(struct Student *s) {
    printf("ID: %d\n", s->id);
    printf("Name: %s\n", s->name);
    printf("DOB: %02d-%02d-%04d\n", s->dob.day, s->dob.month, s->dob.year);

    printf("Marks: ");
    for (int i = 0; i < 5; i++) {
        printf("%.2f ", s->marks[i]);
    }
    printf("\n");
}

int main() {
    struct Student stu1;

    // Assigning values to members
    stu1.id = 101;
    strcpy(stu1.name, "Parth");
    stu1.dob.day = 15;
    stu1.dob.month = 7;
    stu1.dob.year = 2002;

    // Assign values to array member
    for (int i = 0; i < 5; i++) {
        stu1.marks[i] = 70.0 + i * 5;
    }

    printStudent(&stu1);

    // Array of structures
    struct Student stuList[2] = {
        {102, "Tarun", {12, 3, 2001}, {85, 80, 78, 90, 88}},
        {103, "Golu", {5, 11, 2000}, {75, 82, 77, 85, 80}}
    };

    for (int i = 0; i < 2; i++) {
        printf("\nStudent %d info:\n", i + 2);
        printStudent(&stuList[i]);
    }

    return 0;
}
