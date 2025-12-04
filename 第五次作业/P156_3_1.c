//思路：找一个整数使得该整数的立方不大于给定的数
#include<stdio.h>
int main(){
    int m=0;
    float n=0;
    scanf("%f",&n);
    if(n>=0){
        for(;m*m*m<=n;m++);
        printf("%d\n",m-1);
    }
    else{
        for(;m*m*m>=n;m--);
        if((m+1)*(m+1)*(m+1)==n) printf("%d\n",m+1);
        else printf("%d\n",m);
    }
    return 0;
}