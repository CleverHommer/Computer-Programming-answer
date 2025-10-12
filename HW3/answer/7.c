#include <stdio.h>

int main() {
    float a[3], b[3], dotProd = 0.0f;
    int i;
    printf("请输入第一个矢量: ");
    scanf("%f %f %f", &a[0], &a[1], &a[2]);
    printf("请输入第二个矢量: ");
    scanf("%f %f %f", &b[0], &b[1], &b[2]);
    for (i = 0; i < 3; ++i) {
        dotProd += a[i] * b[i];
    }
    printf("内积是：%f\n", dotProd);
    return 0;
}