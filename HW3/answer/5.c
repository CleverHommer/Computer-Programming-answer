#include <stdio.h>

int main() {
    int n, i, j;
    printf("Perfect numbers (<=1000) and their divisors:\n");
    for (n = 2; n < 1000; ++n) {
        int sum = 0;
        int divisors[32];
        int cnt = 0;
        for (i = 1; i <= n / 2; ++i) {
            if (n % i == 0) {
                sum += i;
                if (cnt < 32) divisors[cnt++] = i;
            }
        }
        if (sum == n) {
            printf("Perfect number %d has divisors: ", n);
            for (j = 0; j < cnt; ++j) {
                if (j) printf(", ");
                printf("%d", divisors[j]);
            }
            printf(".\n");
        }
    }
    return 0;
}