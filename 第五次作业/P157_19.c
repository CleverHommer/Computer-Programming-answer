/*思路：我们先实现对给定的5个点，验证它们按顺序是否是凸五边形的5个顶点，然后我们再进行拓展
判定凸多边形的一个直接方法是：检查n个外角之和是否为2π,其中外角定义为用π减去对应的内角度数
而这等价于检查多边形的边（对应的向量）是否沿同一个方向转过一圈*/
#include<stdio.h>
struct point{
    float x,y;//x,y分别是点的横、纵坐标
};
int check(struct point* l){//检查五个边向量是否沿同一方向转过一圈
    //怎么检查向量转动方向呢？我们用向量的外积（俗称叉乘）来检查
    //两个向量的外积为正说明向量逆时针转动(0,π),为负说明向量逆时针转动(0,π),为0说明转动角度为0或π
    int book=0;//在下面这个循环里，book与向量外积保持同号
    for(int i=0;i<5;i++){
        int vcp=l[i].x*l[i+1].y-l[i].y*l[i+1].x;//vcp=Vector Cross Product,向量外积
        if(vcp==0){
            printf("vcp[%d]=0\n",i);
            return 0;//第i条边与第i+1条边共线，这不是五边形
        }
        if(book==0) book=(vcp>0)?1:-1;
        else if(vcp*book<0){
            printf("angle %d rotates a different way\n",i+1);
            return 0;//从第i条边转到第i+1条边的转动方向与之前不同，这不是凸五边形（是凹五边形）
        }
    }//这个循环能够运行完成，没有中途返回主函数就说明边向量是沿同一个方向转动的

    book=0;//在下面这个循环里，book表示边向量转了多少圈。主函数里解释过，边向量一定转了整数圈
    for(int i=0;i<5;i++){
        if((l[i].y<0)&&(l[i+1].y)>=0) book++;//把边向量从y轴下方转到y轴上方作为转了一圈的标记
    }
    printf("book=%d\n",book);
    if(book==1) return 1;//恰好转了一圈，这是一个凸五边形
    else return 0;//不止转了一圈，这不是凸五边形（是折五边形）
}
int main(){
    struct point p[7]={0},l[7]={0};//p是储存五个顶点坐标的数组,l是储存五条边对应的向量的数组
    for(int i=0;i<5;i++){
        scanf("%f%f",&p[i].x,&p[i].y);
    }
    p[5]=p[0];//为了方便地写后面的循环，在这里提前补充定义第6个点与第1个点重合
    for(int i=0;i<5;i++){
        l[i].x=p[i+1].x-p[i].x;
        l[i].y=p[i+1].y-p[i].y;
        printf("%f,%f\n",l[i].x,l[i].y);
    }
    l[5]=l[0];//同样的，让第6条边与第1条边重合，这样边向量从第1条边转到第6条边一定转了整数圈
    if(check(l)==1) puts("This is a pentagon");
    else puts("This is not a pentagon");
    return 0;
}