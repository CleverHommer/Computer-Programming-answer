//思路：按内积定义计算就好
#include<stdio.h>
int main(){
    int n=0,a[15]={0},b[15]={0},*p=a,*q=b,res=0;
    scanf("%d",&n);
    if(n>10){
        puts("超出处理能力！");
        return -1;
    }
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    for(int i=0;i<n;i++) scanf("%d",&b[i]);
    for(int i=0;i<n;i++) res+=(*p++)*(*q++);
    printf("%d",res);
    return 0;
}