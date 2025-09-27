#include <stdio.h>
int main(){
    char s[20],c;
    int i;
    for(i=0;(i<20)&&((c=getchar())!='\n');++i)
        s[i]=c;
    printf("%s\n",s);
    return 0;
}