//˼·�������ַ���������strlen�������ַ������ȣ���ͷ���м�������ַ�����Գ�λ�õ��ַ����������
#include<stdio.h>
#include<string.h>//��Ҫʹ���������ͷ��strlen����
int main(){
    int n=0;
    char tmp=0,str[105]={0};//��������ʱԤ��5���λ����֤�������Խ������
    scanf("%s",str);
    n=strlen(str);
    for(int i=0;2*i<n-1;i++){
        tmp=str[i];
        str[i]=str[n-1-i];
        str[n-1-i]=tmp;
    }
    puts(str);
    return 0;
}