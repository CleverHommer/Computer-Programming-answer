#include <stdio.h>
int main() {
    int a, b, c;
    printf("Please enter 3 integers (separated by spaces or newlines): ");
    scanf("%d %d %d", &a, &b, &c);

    int t;
    if (a > b) { t = a; a = b; b = t; }
    if (a > c) { t = a; a = c; c = t; }
    if (b > c) { t = b; b = c; c = t; }

    printf("Sorted ascending: %d %d %d\n", a, b, c);
    return 0;
}