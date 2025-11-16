#include <stdio.h>

void count_vowels_consonants(const char *s, int *vowels, int *consonants) {
    *vowels = *consonants = 0;
    for (int i = 0; s[i] != '\0'; ++i) {
        char c = s[i];
        if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) {
            if (c >= 'A' && c <= 'Z') c = c - 'A' + 'a';
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
                (*vowels)++;
            else
                (*consonants)++;
        }
    }
}

int main(void) {
    char str[1000];
    int vowels, consonants;

    printf("Enter a string: ");
    if (!fgets(str, sizeof str, stdin)) return 0;

    for (int i = 0; str[i] != '\0'; ++i) {
        if (str[i] == '\n') { str[i] = '\0'; break; }
    }

    count_vowels_consonants(str, &vowels, &consonants);

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    return 0;
}