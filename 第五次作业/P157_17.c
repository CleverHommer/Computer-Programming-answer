//思路：输入字符串后利用strlen函数求字符串长度，从头到中间逐个将字符与其对称位置的字符交换后输出
#include<stdio.h>
#include<string.h>//需要使用这个库里头的strlen函数
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
    char str[105]={0};//定义数组时预留5格空位，保证不会出现越界问题
    scanf("%s",str);
    n=strlen(str);
    reverse(n,str);
    puts(str);
    return 0;
}