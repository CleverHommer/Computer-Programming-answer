#include <stdio.h>

int main(void) {
    const double principal = 1000.0;
    const double rate_xiaoming = 0.10; // 单利（相对于原始本金）
    const double rate_xiaohong = 0.05; // 复利

    double xm = principal; // 小明资金
    double xh = principal; // 小红资金
    int years = 0;

    // 计算直到小红的资金超过小明
    while (xh <= xm) {
        years++;
        xm = principal + principal * rate_xiaoming * years;
        xh *= (1.0 + rate_xiaohong);
    }

    printf("需要 %d 年，小红的资金才会超过小明。\n", years);
    printf("此时小明的资金: %.2f 元\n", xm);
    printf("此时小红的资金: %.2f 元\n", xh);

    return 0;
}