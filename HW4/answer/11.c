#include <stdio.h>
#include <string.h>

int main() {
    char s1[100], s2[100];
    int i = 0;
    int diff = 0;

    printf("Enter the first string: ");
    fgets(s1, sizeof(s1), stdin); 
    printf("Enter the second string: ");
    fgets(s2, sizeof(s2), stdin);

    // Remove trailing newline '\n' if present
    s1[strcspn(s1, "\n")] = '\0';
    s2[strcspn(s2, "\n")] = '\0';

    // Compare character by character
    while (s1[i] != '\0' && s2[i] != '\0') {
        if (s1[i] != s2[i]) {
            diff = s1[i] - s2[i];
            break;
        }
        i++;
    }

    // Output result
    printf("\nResult = %d\n", diff);
    if (diff > 0)
        printf("s1 > s2\n");
    else if (diff < 0)
        printf("s1 < s2\n");
    else
        printf("s1 == s2\n");

    return 0;
}
