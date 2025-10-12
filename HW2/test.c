#include <stdio.h>
int main(){
    int a,i=1000;
    float j=1000.0;
    for(a=1;j<=i;a++){
        i=i+100;
        j=j*1.05;
    }
    printf("年数%d\n",a);
    printf("%d\n%f",i,j);
}