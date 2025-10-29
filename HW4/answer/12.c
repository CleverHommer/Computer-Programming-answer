#include <stdio.h>

#define A_SIZE 20
#define B_SIZE 10
#define C_SIZE (A_SIZE + B_SIZE)

int main() {
    int a[A_SIZE] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19,
                     21, 23, 25, 27, 29, 31, 33, 35, 37, 39};
    int b[B_SIZE] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    int c[C_SIZE];
    int i = 0, j = 0, k = 0;

    // ---- 合并两个有序数组 a 和 b 到 c ----
    while (i < A_SIZE && j < B_SIZE) {
        if (a[i] <= b[j])
            c[k++] = a[i++];
        else
            c[k++] = b[j++];
    }

    // 将剩余元素复制进去
    while (i < A_SIZE) c[k++] = a[i++];
    while (j < B_SIZE) c[k++] = b[j++];

    // ---- 输出结果 ----
    printf("Array a: ");
    for (i = 0; i < A_SIZE; i++) printf("%d ", a[i]);

    printf("\nArray b: ");
    for (j = 0; j < B_SIZE; j++) printf("%d ", b[j]);

    printf("\nMerged array c: ");
    for (k = 0; k < C_SIZE; k++) printf("%d ", c[k]);

    printf("\n");

    return 0;
}
