//思路：设置一个指针从字符串开头一直往后检查，直到遇到第一个'\0'停下，计算指针往后移动了几个字节（每个char变量都占用1字节）
#include<stdio.h>
int _strlen(char* str){
    char *tail=str;
    while(*tail!='\0') tail++;//有一个非常简洁的写法：while(*++tail);（前提是字符串非空）
    return tail-str;//这个程序在处理长度超过105的字符串时可能会死循环，最好还是在while循环里面加入break语句
}
int main(){
    char str[105]={0};
    scanf("%s",str);
    int len=_strlen(str);
    printf("%d",len);
    return 0;
}