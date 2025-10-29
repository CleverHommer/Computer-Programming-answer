#include <stdio.h>
#include <math.h>

int main() {
    double a;
    const double EPS = 1e-5;
    printf("Enter a non-negative number a (to compute sqrt(a)): ");
    scanf("%lf", &a);
    
    if (a < 0.0) {
        printf("Cannot compute real square root of a negative number.\n");
        return 1;
    }
    if (a == 0.0) {
        printf("sqrt(0) = 0.000000\n");
        return 0;
    }

    double x = (a > 1.0) ? a / 2.0 : 1.0; // initial guess
    double next = x;
    int iter = 0;
    const int MAX_ITER = 100000;

    while (iter++ < MAX_ITER) {
        next = 0.5 * (x + a / x);
        if (fabs(next - x) < EPS) break;
        x = next;
    }

    printf("sqrt(%g) = %.6f (iterations: %d)\n", a, next, iter);
    return 0;
}