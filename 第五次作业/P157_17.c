//˼·�������ַ���������strlen�������ַ������ȣ���ͷ���м�������ַ�����Գ�λ�õ��ַ����������
#include<stdio.h>
#include<string.h>//��Ҫʹ���������ͷ��strlen����
void reverse(int len,char* str){
    for(int i=0;2*i<len-1;i++){
        char tmp=0;
        tmp=str[i];
        str[i]=str[len-1-i];
        str[len-1-i]=tmp;
    }
    return;
}
int main(){
    int n=0;
    char str[105]={0};//��������ʱԤ��5���λ����֤�������Խ������
    scanf("%s",str);
    n=strlen(str);
    reverse(n,str);
    puts(str);
    return 0;
}