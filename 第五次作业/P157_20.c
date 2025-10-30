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
void print(int *m,int n,int k){//n表示二维数组第二维的大小，k表示要输出的矩阵大小
    for(int i=0;i<k;i++){
        for(int j=0;j<k-1;j++){
            printf("%d ",*(m+i*n+j));//调用二维数组中m[i][j]的方式，后面学到指针会详细讲，这里也可以写m[i*n+j]
        }
        printf("%d\n",m[i*n+k-1]);
    }
    return;
}
int main(){
    int a[10][10]={{1,2,3,4,5},{4,5,6,7,8},{2,10,-7,0,3},{0,0,0,0,0},{-7,-2,3,5,-4}};
    //多维数组的赋初值方式类似于数学中描述以集合为元素的集合的方式
    print(*a,10,5);//二维数组在传递地址时要传递*a而不是a
    return 0;
}
//注：运行这个程序，你会发现矩阵的数并没有对齐，想想怎么将其对齐？