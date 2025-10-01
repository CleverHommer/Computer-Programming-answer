#include <stdio.h>

int main() {
    long double x = 3.141592653589793238L;
    printf("以浮点形式输出: %Lf\n", x);
    printf("科学计数法输出: %Le\n", x);
    printf("最简形式输出: %Lg\n", x);
    return 0;
}
