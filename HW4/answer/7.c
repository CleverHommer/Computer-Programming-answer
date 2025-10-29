#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char line[1024];
    printf("Enter a line of text (max 1023 chars):\n");
    if (fgets(line, sizeof line, stdin) == NULL) {
        strcpy(line, "why do you input nothing?\n");
    }

    /* remove trailing newline if any */
    int len = strlen(line);
    int i;
    if (len > 0 && line[len - 1] == '\n') line[len - 1] = '\0';

    int upper = 0, lower = 0, digit = 0, other = 0;
    unsigned char ch;
    for (i = 0; line[i] != '\0'; ++i) {
        ch = (unsigned char)line[i];
        if (isupper(ch)) ++upper;
        else if (islower(ch)) ++lower;
        else if (isdigit(ch)) ++digit;
        else ++other;
    }

    printf("Uppercase letters: %d\n", upper);
    printf("Lowercase letters: %d\n", lower);
    printf("Digits: %d\n", digit);
    printf("Other characters: %d\n", other);

    return 0;
}