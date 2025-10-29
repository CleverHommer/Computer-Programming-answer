#include <stdio.h>
#include <math.h>

double f(double x) {
    return 2.0*x*x*x - 4.0*x*x + 3.0*x - 6.0;
}

double bisection(double a, double b, double tol) {
    double fa = f(a), fb = f(b), m, fm;
    int iter = 0, max_iter = 1000;
    while ((b - a) / 2.0 > tol && iter++ < max_iter) {
        m = (a + b) / 2.0;
        fm = f(m);
        if (fm == 0.0) return m;
        if (fa * fm < 0.0) { b = m; fb = fm; }
        else { a = m; fa = fm; }
    }
    return (a + b) / 2.0;
}

int main() {
    const double left = -10.0, right = 10.0;
    const double step = 0.01;
    const double tol = 1e-12;
    double a = left, b;
    double roots[16];
    int nroots = 0,i;

    for (a = left; a < right; a += step) {
        b = a + step;
        if (b > right) b = right;
        double fa = f(a), fb = f(b);
        double r;
        if (fabs(fa) < 1e-14) r = a;
        else if (fa * fb < 0.0) r = bisection(a, b, tol);
        else continue;

        if (!(r > left && r < right)) continue; // keep roots strictly inside (-10,10)

        // check duplicate (compare with all found roots)
        int dup = 0;
        for (i = 0; i < nroots; ++i) {
            if (fabs(r - roots[i]) < 1e-8) { dup = 1; break; }
        }
        if (!dup && nroots < (int)(sizeof(roots)/sizeof(roots[0]))) {
            roots[nroots++] = r;
        }
    }

    if (nroots == 0) {
        printf("No real root found in (%.1f, %.1f).\n", left, right);
    } else {
        printf("Found %d real root(s) in (%.1f, %.1f):\n", nroots, left, right);
        for (i = 0; i < nroots; ++i) {
            printf("x%d = %.12f\n", i+1, roots[i]);
        }
    }

    return 0;
}