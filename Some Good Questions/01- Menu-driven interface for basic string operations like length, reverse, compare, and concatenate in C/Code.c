#include <stdio.h>
#include <string.h>

void reverse(char *str) {
    int i, j;
    char temp;
    for (i = 0, j = strlen(str) - 1; i < j; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

int main() {
    char str1[100], str2[100], temp[200];
    int choice;

    while (1) {
        printf("\n----- STRING OPERATIONS MENU -----\n");
        printf("1. Length of String\n");
        printf("2. Reverse String\n");
        printf("3. Compare Two Strings\n");
        printf("4. Concatenate Two Strings\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();  // clear newline

        switch (choice) {

            case 1:
                printf("Enter a string: ");
                fgets(str1, sizeof(str1), stdin);
                str1[strcspn(str1, "\n")] = '\0';
                printf("Length of string = %lu\n", strlen(str1));
                break;

            case 2:
                printf("Enter a string: ");
                fgets(str1, sizeof(str1), stdin);
                str1[strcspn(str1, "\n")] = '\0';
                strcpy(temp, str1);
                reverse(temp);
                printf("Reversed string = %s\n", temp);
                break;

            case 3:
                printf("Enter first string: ");
                fgets(str1, sizeof(str1), stdin);
                str1[strcspn(str1, "\n")] = '\0';

                printf("Enter second string: ");
                fgets(str2, sizeof(str2), stdin);
                str2[strcspn(str2, "\n")] = '\0';

                if (strcmp(str1, str2) == 0)
                    printf("Both strings are equal\n");
                else
                    printf("Strings are NOT equal\n");
                break;

            case 4:
                printf("Enter first string: ");
                fgets(str1, sizeof(str1), stdin);
                str1[strcspn(str1, "\n")] = '\0';

                printf("Enter second string: ");
                fgets(str2, sizeof(str2), stdin);
                str2[strcspn(str2, "\n")] = '\0';

                strcpy(temp, str1);
                strcat(temp, str2);
                printf("Concatenated string = %s\n", temp);
                break;

            case 5:
                printf("Exiting program...\n");
                return 0;

            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}