#include <stdio.h>
int main() {
    int n,i;
    printf("Please enter a positive integer with up to 5 digits: ");
    scanf("%d", &n);

    if (n <= 0 || n > 99999) {
        printf("The number must be between 1 and 99999.\n");
        return 1;
    }

    int digits[5];
    int count = 0;
    int tmp = n;
    while (tmp > 0) {
        digits[count++] = tmp % 10; // store from least significant to most
        tmp /= 10;
    }

    printf("Number of digits: %d\n", count);

    // Print digits from highest to lowest
    printf("Digits (high to low): ");
    for (i = count - 1; i >= 0; --i) {
        printf("%d", digits[i]);
        if (i > 0) printf(" ");
    }
    printf("\n");

    // Print digits in reverse order (e.g., 321 -> 123)
    printf("Digits in reverse order: ");
    for (i = 0; i < count; ++i) {
        printf("%d", digits[i]);
        if (i < count - 1) printf(" ");
    }
    printf("\n");

    // Also print the reversed integer value
    int reversed = 0;
    for (i = 0; i < count; ++i) {
        reversed = reversed * 10 + digits[i];
    }
    printf("Reversed integer: %d\n", reversed);

    return 0;
}