#include <stdio.h>

int main() {
    const int n = 1000;
    int k;
    double prod = 1.0, num, den;
    

    for (k = 1; k <= n; ++k) {
        num = 4.0 * k * k;
        den = (2.0 * k - 1.0) * (2.0 * k + 1.0);
        prod *= num / den;
    }

    double pi = 2.0 * prod;
    printf("n = %d, pi = %.18f\n", n, pi);
    return 0;
}