//思路：设置一个指针从字符串开头一直往后检查，遇到第一个'\0'停下，计算指针往后移动了几位
#include<stdio.h>
int _strlen(char* str){
    char *tail=str;
    while(tail-str<101){
        if(*tail=='\0') return tail-str;
        tail++;
    }
    return -1;
}
int main(){
    char str[105]={0};
    scanf("%s",str);
    int len=_strlen(str);
    if(len==-1){
        puts("超出处理能力！");
        return -1;
    }
    printf("%d",len);
    return 0;
}