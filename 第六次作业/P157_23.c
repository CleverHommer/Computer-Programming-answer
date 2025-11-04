//思路：如题目所述，记得处理符号
#include<stdio.h>
void partition(int n){
    if(n==0) return;
    partition(n/10);
    printf("%d\n",n%10);
    return;
}
int main(){
    int n=0;
    scanf("%d",&n);
    if(n<0){
        puts("-");
        n=-n;
    }
    if(n==0) puts("0");
    partition(n);
    return 0;
}