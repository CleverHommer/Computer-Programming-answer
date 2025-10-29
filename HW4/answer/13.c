#include <stdio.h>
#include <math.h>

#define MAXN 20   // 最大项数

int main() {
    int n;                  // 多项式项数
    double coef[MAXN];      // 系数数组
    int exp[MAXN];          // 幂次数组
    double x, result = 0;   // 自变量x与计算结果

    // 输入项数
    printf("Enter the number of terms in the polynomial: ");
    scanf("%d", &n);

    // 输入每一项的系数和幂次
    printf("Enter coefficient and exponent for each term (a_i, e_i):\n");
    for(int i = 0; i < n; i++) {
        printf("Term %d: ", i + 1);
        scanf("%lf %d", &coef[i], &exp[i]);
    }

    // 输入x值
    printf("Enter the value of x: ");
    scanf("%lf", &x);

    // 计算多项式的值
    for(int i = 0; i < n; i++) {
        result += coef[i] * pow(x, exp[i]);
    }

    // 输出结果
    printf("\nPolynomial: g(x) = ");
    for(int i = 0; i < n; i++) {
        printf("%.2lf*x^%d", coef[i], exp[i]);
        if (i < n - 1) printf(" + ");
    }

    printf("\nWhen x = %.2lf, g(x) = %.4lf\n", x, result);

    return 0;
}
