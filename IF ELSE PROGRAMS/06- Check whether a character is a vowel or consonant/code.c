#include <stdio.h>

int main() {
    printf("Welcome !! \n Let's check whether a character is a vowel or consonant \n");
    char ch;
    printf("Enter an alphabet: ");
    scanf("%c", &ch);
    switch(ch) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("%c is a Vowel.\n", ch);
            break;
        default:
            printf("%c is a Consonant.\n", ch);
    }
    return 0;
}