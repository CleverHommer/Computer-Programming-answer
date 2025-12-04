//思路：仿照课本例4.3-14。边生成随机数边统计，就不用存储10000个数了。
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int a[25]={0},b[25]={0};
    srand((unsigned) time(NULL));
    for(int i=0;i<100;i++) a[rand()%20+1]++;
    for(int i=0;i<10000;i++) b[rand()%20+1]++;
    puts("随机生成100次后出现的次数占比：");
    for(int i=1;i<=20;i++){
        printf("%d:%.2f\t\t",i,a[i]/100.0);
        if(i%5==0) printf("\n");
    }
    puts("随机生成10000次后出现的次数占比：");
    for(int i=1;i<=20;i++){
        printf("%d:%.4f\t",i,b[i]/10000.0);
        if(i%5==0) printf("\n");
    }
    return 0;
}