//思路：用辗转相除法求最大公约数，直接用a*b/gcd(a,b)求得最小公倍数
#include<stdio.h>
int _gcd(int a,int b){//避免与下面设置的变量重名，给变量名前面加下划线也是一样的效果，只不过习惯上给函数名前面加下划线更多
    int r=a%b;//若a<b则r=a,因此不用特意判断a,b谁大
    while(r!=0){//这里可以直接写!r,用所学知识想想为什么？
        a=b;
        b=r;
        r=a%b;
    }
    return b;
}//gcd=Greatest Common Divisor
int _lcm(int a,int b){
    return a*b/gcd(a,b);
}//lcm=Least Common Multiple
int main(){
    int a=0,b=0,gcd=0,lcm=0;
    scanf("%d%d",&a,&b);
    gcd=_gcd(a,b);
    lcm=_lcm(a,b);
    printf("%d %d\n",gcd,lcm);
    return 0;
}