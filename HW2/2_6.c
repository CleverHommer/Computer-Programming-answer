#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c;
    printf("Please enter three positive integers as the triangle side lengths (separated by spaces or newlines): ");
    scanf("%d %d %d", &a, &b, &c);

    if (a <= 0 || b <= 0 || c <= 0) {
        printf("Side lengths must be positive integers.\n");
        return 1;
    }

    /* Check triangle inequality: sum of any two sides > third side */
    if (a + b <= c || a + c <= b || b + c <= a) {
        printf("The given lengths cannot form a triangle.\n");
        return 0;
    }

    double s = (a + b + c) / 2.0;
    double area = sqrt(s * (s - a) * (s - b) * (s - c));

    printf("The lengths can form a triangle.\n");
    printf("Sides: %d, %d, %d\n", a, b, c);
    printf("Triangle area: %.6f\n", area);

    return 0;
}