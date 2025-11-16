#include <stdio.h>

void concatenateStrings(char str1[], char str2[]) {
    int i = 0, j = 0;

    while (str1[i] != '\0') {
        i++;
    }

    while (str2[j] != '\0') {
        str1[i] = str2[j];
        i++;
        j++;
    }

    str1[i] = '\0';
}

int main() {
    char str1[200], str2[100];

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    int k = 0;
    while (str1[k] != '\0') {
        if (str1[k] == '\n') {
            str1[k] = '\0';
            break;
        }
        k++;
    }

    k = 0;
    while (str2[k] != '\0') {
        if (str2[k] == '\n') {
            str2[k] = '\0';
            break;
        }
        k++;
    }

    concatenateStrings(str1, str2);
    printf("Concatenated string: %s\n", str1);

    return 0;
}
