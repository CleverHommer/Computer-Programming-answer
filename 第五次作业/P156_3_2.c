//思路：利用二分法大致求得原数的立方根，再输出整数部分
#include<stdio.h>
int main(){
    int m=0;
    float n=0,L=0,R=0,mid=0;
    scanf("%f",&n);
    if(n>=0) R=n;
    else L=n;
    while(R-L>0.01){//既然只是求整数部分，没有必要精确到小数点后太多位
        mid=(L+R)/2;
        if(mid*mid*mid>=n) R=mid;
        else L=mid;
    }
    m=(int)R;//隐式转换，会强行舍弃小数点后的数字，无论正负
    if(m*m*m<=n) printf("%d\n",m);//无论取L还是R的整数部分，都有可能恰好与n的立方根之间隔着一个整数，因此还需要判断
    else printf("%d\n",m-1);
    return 0;
}