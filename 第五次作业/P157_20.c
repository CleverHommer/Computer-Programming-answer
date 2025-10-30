//思路：如题目描述
#include<stdio.h>
void transpose4(int* m){
    int tmp=0;
    for(int i=0;i<4;i++){
        for(int j=i+1;j<4;j++){
            tmp=*(m+i*4+j);
            *(m+i*4+j)=*(m+j*4+i);
            *(m+j*4+i)=tmp;
        }
    }
    return;
}
void transposeN(int *m,int n){
    int tmp=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            tmp=*(m+i*n+j);
            *(m+i*n+j)=*(m+j*n+i);
            *(m+j*n+i)=tmp;
        }
    }
    return;
}
void work(int *m,int n){//n表示二维数组第二维的大小
    int k=0;
    scanf("%d",&k);
    for(int i=0;i<k;i++){
        for(int j=0;j<k;j++){
            scanf("%d",m+i*n+j);
            //m本身就是地址，不用再加取地址符了
        }
    }
    for(int i=0;i<k;i++){
        for(int j=0;j<k-1;j++){
            printf("%d ",*(m+i*n+j));
            //调用二维数组中m[i][j]的方式，后面学到指针与二维数组会详细讲
            //这里也可以写m[i*n+j],效果是一样的
        }
        printf("%d\n",m[i*n+k-1]);
    }
    return;
}
int main(){
    int a[15][15]={{0,0,0,0},{0,0,0},{0,0}};
    //多维数组赋初值类似于数学中表示以集合为元素的集合
    work(*a,10);//编译器会把a理解成指向一维数组的指针
    //因此*a指向的就是第一行对应的一维数组的首地址
    return 0;
}
//注：运行这个程序，你会发现矩阵的数并没有对齐，想想怎么将其对齐？