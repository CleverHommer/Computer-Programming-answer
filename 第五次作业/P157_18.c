//˼·������strlen����ȷ�������ַ����ĳ��ȣ���str1���ַ���һ����str�У��ٽ�str2���ַ�����������
#include<stdio.h>
#include<string.h>
void _strcat(char* str1,char* str2,char* str){
    //cat��ָconcatenate:v.���ӣ�ע������������string.h�⣬��˺�����������������������е�strcat������ͻ
    int l1=strlen(str1),l2=strlen(str2);
    for(int i=0;i<l1;i++){
        str[i]=str1[i];
    }
    for(int i=0;i<l2;i++){
        str[i+l1]=str2[i];
    }
    return;
}
int main(){
    char str1[105],str2[105],str[205];
    scanf("%s %s",str1,str2);
    _strcat(str1,str2,str);
    puts(str);
    return 0;
}