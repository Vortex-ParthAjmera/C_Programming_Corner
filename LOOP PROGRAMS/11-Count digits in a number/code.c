#include <stdio.h>

int main() {
    int number, count = 0;
    printf("Enter an integer: ");
    scanf("%d", &number);

    if (number == 0) {
        count = 1;  // special case for zero
    } else {
        if (number < 0) {
            number = -number;  // convert negative to positive
        }
        while (number > 0) {
            number = number / 10;
            count++;
        }
    }

    printf("Number of digits: %d\n", count);
    return 0;
}
