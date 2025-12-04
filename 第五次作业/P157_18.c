//思路：先用strlen函数确定两个字符串的长度，把str1的字符逐一赋进str中，再将str2的字符中贴到后面
#include<stdio.h>
#include<string.h>
void _strcat(char* str1,char* str2,char* str){
    //cat是指concatenate:v.连接，注意我们引用了string.h库，因此函数名不能与这个库里面已有的strcat函数冲突
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