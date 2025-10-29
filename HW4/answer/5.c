#include <stdio.h>

#define M 3   // a的行数
#define N 4   // a的列数、b的行数
#define P 2   // b的列数

int main() {
    int a[M][N] = {
        {5, 8, 3, 2},
        {11, 0, 5, 7},
        {4, 6, 9, 1}
    };

    int b[N][P] = {
        {1, 18},
        {2, 11},
        {10, 3},
        {4, 7}
    };

    int c[M][P];
    int i, j, k, s;

    for (i = 0; i < M; i++) {
        for (j = 0; j < P; j++) {
            for (k = s = 0; k < N; k++) {
                s += a[i][k] * b[k][j];
            }
            c[i][j] = s;
        }
    }

    for (i = 0; i < M; i++) {
        for (j = 0; j < P; j++) {
            printf("%6d\t", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
