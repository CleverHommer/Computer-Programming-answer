#include <stdio.h>

int main() {
    int a[4], i, j, min_idx, tmp;
    printf("Please enter 4 integers (separated by spaces or newlines): ");
    scanf("%d %d %d %d", &a[0], &a[1], &a[2], &a[3]);

    // Simple selection sort: ascending order
    for (i = 0; i < 3; ++i) {
        min_idx = i;
        for (j = i + 1; j < 4; ++j) {
            if (a[j] < a[min_idx]) min_idx = j;
        }
        if (min_idx != i) {
            tmp = a[i];
            a[i] = a[min_idx];
            a[min_idx] = tmp;
        }
    }

    printf("Sorted ascending: %d %d %d %d\n", a[0], a[1], a[2], a[3]);
    return 0;
}