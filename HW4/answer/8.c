#include <stdio.h>
#include <string.h>

int main() {
    const int MAX = 256;
    char s1[MAX];
    char s2[MAX];

    printf("Enter a string (max 255 chars): ");
    if (fgets(s1, MAX, stdin) == NULL) return 0;

    /* remove trailing newline if present (optional) */
    int len = strlen(s1);
    if (len > 0 && s1[len - 1] == '\n') s1[len - 1] = '\0';

    /* copy including the null terminator, stop after copying '\0' */
    int i;
    for (i = 0; i < MAX; ++i) {
        s2[i] = s1[i];
        if (s1[i] == '\0') break;
    }

    printf("s1: \"%s\"\n", s1);
    printf("s2: \"%s\"\n", s2);
    printf("Copied %zu bytes (including null terminator)\n", i + 1);

    return 0;
}