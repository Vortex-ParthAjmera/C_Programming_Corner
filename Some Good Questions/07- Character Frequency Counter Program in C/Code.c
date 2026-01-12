#include <stdio.h>
int main() {
    char str[300];
    int freq[256] = {0};
    int i;

    int alphabets = 0, digits = 0, symbols = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    for (i = 0; str[i] != '\0'; i++) {
        unsigned char ch = str[i];
        freq[ch]++;
        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
            alphabets++;
        else if (ch >= '0' && ch <= '9')
            digits++;
        else if (ch != '\n' && ch != ' ') 
            symbols++;
    }
    printf("\nTotal Alphabets: %d\n", alphabets);
    printf("Total Digits: %d\n", digits);
    printf("Total Symbols: %d\n", symbols);

    return 0;
}