//˼·�����ö��ַ��������ԭ�������������������������
#include<stdio.h>
int main(){
    int m=0;
    float n=0,L=0,R=0,mid=0;
    scanf("%f",&n);
    if(n>=0) R=n;
    else L=n;
    while(R-L>0.01){//��Ȼֻ�����������֣�û�б�Ҫ��ȷ��С�����̫��λ
        mid=(L+R)/2;
        if(mid*mid*mid>=n) R=mid;
        else L=mid;
    }
    m=(int)R;//��ʽת������ǿ������С���������֣���������
    if(m*m*m<=n) printf("%d\n",m);//����ȡL����R���������֣����п���ǡ����n��������֮�����һ����������˻���Ҫ�ж�
    else printf("%d\n",m-1);
    return 0;
}