#include<stdio.h>
int main(){
    int a[]={0,1,2,3,4,5,6,7,8,9};
    int *p=a,*q=&a[9];
    printf("%d\n",*p++);
    printf("%d\n",*++p);
    printf("%d\n",*q--);
    printf("%d\n",*--q);
    while(p<=q)
        printf("%d %d\n",*p++,*q--);
    return 0;
}