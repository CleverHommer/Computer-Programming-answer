#include <stdio.h>

long long comb(int n, int k) {
    int i;
    if (k < 0 || k > n) return 0;
    if (k == 0 || k == n) return 1;
    if (k > n - k) k = n - k;
    long long res = 1;
    for (i = 1; i <= k; ++i) {
        res = res * (n - k + i) / i;
    }
    return res;
}

int main() {
    int total_pick = 8;
    int R = 3, W = 3, B = 6;
    int dist_count = 0;
    long long ways_total = 0;
    int i,r,w,b;

    printf("All color distributions (r,w,b) with r+w+b = %d:\n", total_pick);
    for (r = 0; r <= R; ++r) {
        for (w = 0; w <= W; ++w) {
            b = total_pick - r - w;
            if (b < 0 || b > B) continue;
            ++dist_count;
            long long ways = comb(R, r) * comb(W, w) * comb(B, b);
            ways_total += ways;
            printf("(%d, %d, %d)  ways = %lld\n", r, w, b, ways);
        }
    }

    printf("\nNumber of distinct color distributions: %d\n", dist_count);
    printf("Total number of selection ways (balls distinguishable by identity): %lld\n", ways_total);

    return 0;
}