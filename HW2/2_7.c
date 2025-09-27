#include <stdio.h>
#include <math.h>

int main(void) {
    double a, b, c;
    const double EPS = 1e-12;

    printf("Enter coefficients a, b, c (separated by spaces or newlines): ");
    scanf("%lf %lf %lf", &a, &b, &c);

    printf("Equation: %g*x^2 + %g*x + %g = 0\n", a, b, c);

    if (fabs(a) < EPS) {
        // Degenerate to linear bx + c = 0
        if (fabs(b) < EPS) {
            if (fabs(c) < EPS) {
                printf("All coefficients are zero: infinite number of solutions.\n");
            } else {
                printf("No solution: 0*x = %g (inconsistent).\n", c);
            }
        } else {
            double x = -c / b;
            printf("Linear equation. Single root: x = %.12g\n", x);
        }
        return 0;
    }

    double disc = b * b - 4.0 * a * c;
    double denom = 2.0 * a;

    if (disc > EPS) {
        double sqrt_d = sqrt(disc);
        double x1 = (-b + sqrt_d) / denom;
        double x2 = (-b - sqrt_d) / denom;
        printf("Two distinct real roots:\n");
        printf("x1 = %.12g\n", x1);
        printf("x2 = %.12g\n", x2);
    } else if (fabs(disc) <= EPS) {
        double x = -b / denom;
        printf("One real (repeated) root:\n");
        printf("x = %.12g\n", x);
    } else { // disc < 0
        double sqrt_d = sqrt(-disc);
        double real = -b / denom;
        double imag = sqrt_d / fabs(denom);
        printf("Two complex conjugate roots:\n");
        printf("x1 = %.12g + %.12g i\n", real, imag);
        printf("x2 = %.12g - %.12g i\n", real, imag);
    }

    return 0;
}