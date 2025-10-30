//思路：可逆素数指的是：本身是素数且其反转数也是素数的数，因此运行一个从100到1000的循环，判断每个数是否满足要求并输出满足要求的数
#include<stdio.h>
int is_prime(int n){
    int book=1;//book=1表示n是素数，book=0则n不是素数
    for(int i=2;i*i<=n;i++){//由数学知识，我们知道任何非素数n一定会有不大于n的算数平方根的因子
        if(n%i==0){
            book=0;
            break;//找到n的一个非平凡因子就够了
        }
    }
    return book;//book有登记，记录的意思，也有人喜欢用mark,token等词来命名有标记意义的变量
}
int reverse(int n){
    int rev=0;
    while(n!=0){
        rev*=10;
        rev+=n%10;
        n/=10;
    }
    return rev;
}
int main(){
    int count=0;
    for(int i=100;i<1001;i++){
        if(is_prime(i)&&is_prime(reverse(i))){
            if(count==5){//6个一行，方便阅读
                printf("%d\n",i);
                count=0;
            }
            else{
                printf("%d ",i);
                count++;
            }
        }
    }
    return 0;
}