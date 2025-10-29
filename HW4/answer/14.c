#include <stdio.h>

#define N 10  // 要输出的行数

int main() {
    int a[N][N];  // 用二维数组保存杨辉三角数据
    int i, j;  

    // 生成杨辉三角
    for (i = 0; i < N; i++) {
        for (j = 0; j <= i; j++) {
            if (j == 0 || j == i)       // 每行的第一个和最后一个元素为1
                a[i][j] = 1;
            else                        // 其余元素 = 上一行的两个相邻元素之和
                a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
        }
    }

    // 输出杨辉三角
    for (i = 0; i < N; i++) {
        for (j = 0; j <= i; j++)
            printf("%4d", a[i][j]);  // 每个数宽度4便于对齐
        printf("\n");
    }

    return 0;
}
