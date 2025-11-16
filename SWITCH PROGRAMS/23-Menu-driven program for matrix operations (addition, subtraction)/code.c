#include <stdio.h>

int main() {
    int choice;
    int rows, cols;
    int matrix1[10][10], matrix2[10][10], result[10][10];
    int i, j;

    while(1) {
        printf("\nMenu for Matrix Operations\n");
        printf("1. Matrix Addition\n");
        printf("2. Matrix Subtraction\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
            case 2:
                printf("Enter number of rows (max 10): ");
                scanf("%d", &rows);
                printf("Enter number of columns (max 10): ");
                scanf("%d", &cols);

                printf("Enter elements of first matrix:\n");
                for(i = 0; i < rows; i++) {
                    for(j = 0; j < cols; j++) {
                        scanf("%d", &matrix1[i][j]);
                    }
                }

                printf("Enter elements of second matrix:\n");
                for(i = 0; i < rows; i++) {
                    for(j = 0; j < cols; j++) {
                        scanf("%d", &matrix2[i][j]);
                    }
                }

                // Perform operation based on choice using if-else
                if(choice == 1) {
                    for(i = 0; i < rows; i++) {
                        for(j = 0; j < cols; j++) {
                            result[i][j] = matrix1[i][j] + matrix2[i][j];
                        }
                    }
                    printf("Result of addition:\n");
                } else if(choice == 2) {
                    for(i = 0; i < rows; i++) {
                        for(j = 0; j < cols; j++) {
                            result[i][j] = matrix1[i][j] - matrix2[i][j];
                        }
                    }
                    printf("Result of subtraction:\n");
                }

                for(i = 0; i < rows; i++) {
                    for(j = 0; j < cols; j++) {
                        printf("%d\t", result[i][j]);
                    }
                    printf("\n");
                }
                break;

            case 3:
                printf("Exiting program.\n");
                return 0;

            default:
                printf("Invalid choice. Please select a valid option.\n");
        }
    }

    return 0;
}
