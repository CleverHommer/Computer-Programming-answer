//˼·����շת����������Լ����ֱ����a*b/gcd(a,b)�����С������
#include<stdio.h>
int _gcd(int a,int b){//�������������õı�����������������ǰ����»���Ҳ��һ����Ч����ֻ����ϰ���ϸ�������ǰ����»��߸���
    int r=a%b;//��a<b��r=a,��˲��������ж�a,b˭��
    while(r!=0){//�������ֱ��д!r,����ѧ֪ʶ����Ϊʲô��
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