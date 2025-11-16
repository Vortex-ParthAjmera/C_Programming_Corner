#include <stdio.h>

int main() {
    int i;
    for (i = 10; i >= 1; i--) {
        if (i >= 1) {
            printf("%d ", i);
        } else {
            // Just for demonstration, though this else won't be executed in this loop setup
            printf("Number out of range ");
        }
    }
    printf("\n");
    return 0;
}
