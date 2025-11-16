#include <stdio.h>

int main() {
    int n, i, choice;
    int arr[100];  // fixed max size for simplicity
    int sum, max, min;
    char cont = 'y';

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d integers:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    while(cont == 'y' || cont == 'Y') {
        printf("\nMenu:\n");
        printf("1. Calculate Sum\n");
        printf("2. Find Maximum\n");
        printf("3. Find Minimum\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                sum = 0;
                for(i = 0; i < n; i++) {
                    sum += arr[i];
                }
                printf("Sum of array elements = %d\n", sum);
                break;

            case 2:
                max = arr[0];
                for(i = 1; i < n; i++) {
                    if(arr[i] > max) {
                        max = arr[i];
                    }
                }
                printf("Maximum element = %d\n", max);
                break;

            case 3:
                min = arr[0];
                for(i = 1; i < n; i++) {
                    if(arr[i] < min) {
                        min = arr[i];
                    }
                }
                printf("Minimum element = %d\n", min);
                break;

            case 4:
                cont = 'n';
                printf("Exiting program.\n");
                break;

            default:
                printf("Invalid choice! Please try again.\n");
                break;
        }

        if (cont != 'n') {
            printf("Do you want to continue? (y/n): ");
            scanf(" %c", &cont);
        }
    }

    return 0;
}
