#include <stdio.h>
#include <string.h>

int main() {
    char str1[100] = "Hello";
    char str2[100] = "World";
    char str3[100];
    char *pos;

    // strlen
    printf("Length of str1: %lu\n", strlen(str1));

    // strcpy and strncpy
    strcpy(str3, str1);
    printf("Copied str1 to str3: %s\n", str3);
    strncpy(str3, str2, 3);
    str3[3] = '\0';  // Null terminate 
    printf("After strncpy 3 chars from str2 to str3: %s\n", str3);

    // strcat and strncat
    strcat(str1, str2);
    printf("After strcat str2 to str1: %s\n", str1);

    strncat(str2, "!!!", 2);
    printf("After strncat \"!!!\" (2 chars) to str2: %s\n", str2);

    // strcmp and strncmp
    printf("strcmp(str1, str3): %d\n", strcmp(str1, str3));
    printf("strncmp(str1, str3, 3): %d\n", strncmp(str1, str3, 3));

    // strchr and strrchr
    pos = strchr(str1, 'l');
    if (pos) printf("First occurrence of 'l' in str1: %ld\n", pos - str1);
    pos = strrchr(str1, 'l');
    if (pos) printf("Last occurrence of 'l' in str1: %ld\n", pos - str1);

    // strstr
    pos = strstr(str1, "loWo");
    if (pos) printf("Substring \"loWo\" found at index: %ld\n", pos - str1);

    // memset
    memset(str3, '*', 5);
    str3[5] = '\0';
    printf("After memset in str3: %s\n", str3);

    // memcpy and memcmp
    char src[] = "ABCDEF";
    char dest[10];
    memcpy(dest, src, 6); // includes '\0'
    printf("After memcpy dest: %s\n", dest);
    printf("memcmp(src, dest, 6): %d\n", memcmp(src, dest, 6));

    return 0;
}
