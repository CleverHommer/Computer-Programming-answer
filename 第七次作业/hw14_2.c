//思路：分别在数组的开头和结尾设置指针，逐位向中间移动并交换二者指向的变量
#include<stdio.h>
int main(){
    int n=0,a[15]={0};
    scanf("%d",&n);
    if(n>10){
        puts("超出处理能力！");
    }
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    for(int *p=a,*q=a+n-1;p<q;p++,q--){
        int tmp=*p;
        *p=*q;
        *q=tmp;
    }
    for(int i=0;i<n;i++) printf("%d ",a[i]);
    return 0;
}