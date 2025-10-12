#include <stdio.h>

int main() {
    int n, i;
    printf("Please enter a decimal integer (0-100): ");
    scanf("%d", &n);

    if (n < 0 || n > 100) {
        printf("Number out of range (0-100).\n");
        return 1;
    }

    if (n == 0) {
        printf("Binary: 0\n");
        return 0;
    }

    int bits[7]; // 100 < 128, so 7 bits suffice
    int cnt = 0;
    while (n > 0) {
        bits[cnt++] = n % 2;
        n = n / 2;            
    }

    printf("Binary: ");
    for (i = cnt - 1; i >= 0; --i) {
        putchar(bits[i] ? '1' : '0');
    }
    putchar('\n');

    return 0;
}