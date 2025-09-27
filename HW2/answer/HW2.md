# 第二次作业
**author:** Hommer  

**date:** 0917

## 1. 根据3.2.4节最后的读字符代码编写完整的程序，在接收完字符后输出数组中的字符串。尝试输入尽可能长的字符串以及修改程序中的表达式，观察运行结果。
```dotnetcli
#include <stdio.h>
int main(){
    char s[20],c;
    int i;
    for(i=0;(i<20)&&((c=getchar())!='\n');++i)
        s[i]=c;
    printf("%s\n",s);
    return 0;
}
```

## 2.小明以10%的单利息投资了1000元（即，每年利息为原始本金的10%）。小红以5%的复合利息投资了1000元（即，每年的利息纳入本金）。编写一段程序，计算需要多少年小红的资金总额才会超过小明，并显示那时两人各自的资金总额。
```dotnetcli
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
```
## 3.编程，求：圆周长、圆面积、圆球表面积、圆球体积、圆柱体积。要求，键盘输入圆半径及圆柱高，输出所求各结果并辅以文字说明。
```dotnetcli
#include <stdio.h>
# define PI 3.14

int main(void) {
    double r, h;

    printf("Please enter the circle radius: ");
    scanf("%lf", &r);

    printf("Please enter the cylinder height: ");
    scanf("%lf", &h);

    double circumference = 2.0 * PI * r;
    double circle_area = PI * r * r;
    double sphere_surface = 4.0 * PI * r * r;
    double sphere_volume = 4.0 / 3.0 * PI * r * r * r;
    double cylinder_volume = PI * r * r * h;

    printf("\nRadius: %.6f; Height: %.6f\n", r, h);
    printf("Circle circumference: %.6f\n", circumference);
    printf("Circle area: %.6f\n", circle_area);
    printf("Sphere surface area: %.6f\n", sphere_surface);
    printf("Sphere volume: %.6f\n", sphere_volume);
    printf("Cylinder volume: %.6f\n", cylinder_volume);

    return 0;
}
```
