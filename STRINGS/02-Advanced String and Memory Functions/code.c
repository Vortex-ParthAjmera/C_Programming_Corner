#include <stdio.h>
#include <string.h>
#include <stdlib.h>  // for strdup

int main() {
    char str[] = "apple,banana,orange";
    char delimiters[] = ",";
    char copy[100];
    char *token;
    char *tmp;

    // strdup (POSIX)
    tmp = strdup(str);
    if (tmp) {
        printf("Duplicated string: %s\n", tmp);
        free(tmp);
    }

    // strspn and strcspn
    printf("Initial digits count in '123abc': %lu\n", strspn("123abc", "0123456789"));
    printf("Initial non-digit count in '123abc': %lu\n", strcspn("123abc", "0123456789"));

    // strpbrk - find first char from set
    char *pos = strpbrk(str, delimiters);
    if(pos) {
        printf("First delimiter in string at index: %ld\n", pos - str);
    }

    // strtok - tokenizing
    strcpy(copy, str);
    printf("Tokens:\n");
    token = strtok(copy, delimiters);
    while(token) {
        printf("%s\n", token);
        token = strtok(NULL, delimiters);
    }

    // memmove - overlapping copy
    char overlapping[] = "1234567890";
    memmove(overlapping + 2, overlapping, 5);
    printf("After memmove overlapping: %s\n", overlapping);

#ifdef __USE_GNU
    // stpcpy and stpncpy (GNU extensions)
    char src[] = "TestString";
    char dest[20];
    char *endptr = stpcpy(dest, src);
    *endptr = '\0';
    printf("After stpcpy dest: %s\n", dest);
#endif

    return 0;
}
