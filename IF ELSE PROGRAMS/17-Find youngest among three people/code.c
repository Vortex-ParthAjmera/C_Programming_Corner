#include <stdio.h>

int main() {
    int age1, age2, age3;

    printf("Enter the age of person 1: ");
    scanf("%d", &age1);

    printf("Enter the age of person 2: ");
    scanf("%d", &age2);

    printf("Enter the age of person 3: ");
    scanf("%d", &age3);

    printf("Youngest person(s): ");

    if (age1 < age2 && age1 < age3) {
        printf("Person 1\n");
    }
    else if (age2 < age1 && age2 < age3) {
        printf("Person 2\n");
    }
    else if (age3 < age1 && age3 < age2) {
        printf("Person 3\n");
    }
    else {
        if (age1 == age2 && age1 == age3) {
            printf("Person 1, Person 2 and Person 3 (all same age)\n");
        }
        else if (age1 == age2 && age1 < age3) {
            printf("Person 1 and Person 2\n");
        }
        else if (age1 == age3 && age1 < age2) {
            printf("Person 1 and Person 3\n");
        }
        else if (age2 == age3 && age2 < age1) {
            printf("Person 2 and Person 3\n");
        }
        else {
            if (age1 == age2 && age1 > age3) {
                printf("Person 3\n");
            }
            else if (age1 == age3 && age1 > age2) {
                printf("Person 2\n");
            }
            else if (age2 == age3 && age2 > age1) {
                printf("Person 1\n");
            }
        }
    }

    return 0;
}
