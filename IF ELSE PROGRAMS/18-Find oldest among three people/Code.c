#include <stdio.h>

int main() {
    int age1, age2, age3;

    printf("Enter age of first person: ");
    scanf("%d", &age1);

    printf("Enter age of second person: ");
    scanf("%d", &age2);

    printf("Enter age of third person: ");
    scanf("%d", &age3);

    if (age1 >= age2 && age1 >= age3) {
        printf("The oldest is the first person with age %d.\n", age1);
    } else if (age2 >= age1 && age2 >= age3) {
        printf("The oldest is the second person with age %d.\n", age2);
    } else {
        printf("The oldest is the third person with age %d.\n", age3);
    }

    return 0;
}
