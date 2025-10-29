#include <stdio.h>
#include <math.h>
int main(){
    struct point{
        float x;
        float y;
    };
    struct point p1, p2;

    printf("请输入p1的x和y坐标：");
    scanf("%f %f", &p1.x, &p1.y);
    printf("请输入p2的x和y坐标：");
    scanf("%f %f", &p2.x, &p2.y);

    if (fabs(p1.x - p2.x) < 1e-6 && fabs(p1.y - p2.y) < 1e-6) {
        printf("两点重合，无法计算斜率。\n");
        return 0;
    }

    if (fabs(p2.x - p1.x) < 1e-6) {
        printf("两点x轴坐标相同\n");
        return 0;
    }

    printf("p1-p2的斜率为：%f\n", (p2.y - p1.y) / (p2.x - p1.x));

    return 0;
}
