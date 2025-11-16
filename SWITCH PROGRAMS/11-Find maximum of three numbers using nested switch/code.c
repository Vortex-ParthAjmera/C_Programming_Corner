#include <stdio.h>

int main() {
    int a, b, c, max;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    // Compare a and b
    switch (a >= b) {
        case 1: 
            // If a >= b, compare a and c
            switch (a >= c) {
                case 1: max = a; break;
                case 0: max = c; break;
            }
            break;
        case 0: 
            // If b > a, compare b and c
            switch (b >= c) {
                case 1: max = b; break;
                case 0: max = c; break;
            }
            break;
    }

    printf("Maximum number is: %d\n", max);

    return 0;
}
