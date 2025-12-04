//思路：注意二维数组的指针的传递方式
#include<stdio.h>
void inas(int* a,int m,int n){
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",a+i*n+j);
        }
    }
    return;
}
void outas(int* a,int m,int n){
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d ",*(a+i*n+j));
        }
        printf("\n");
    }
    return;
}
int main(){
    int a[5][5]={0};
    inas(*a,3,4);
    outas(*a,3,4);
    return 0;
}