//˼·������Ŀ����
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
void print(int *m,int n,int k){//n��ʾ��ά����ڶ�ά�Ĵ�С��k��ʾҪ����ľ����С
    for(int i=0;i<k;i++){
        for(int j=0;j<k-1;j++){
            printf("%d ",*(m+i*n+j));//���ö�ά������m[i][j]�ķ�ʽ������ѧ��ָ�����ϸ��������Ҳ����дm[i*n+j]
        }
        printf("%d\n",m[i*n+k-1]);
    }
    return;
}
int main(){
    int a[10][10]={{1,2,3,4,5},{4,5,6,7,8},{2,10,-7,0,3},{0,0,0,0,0},{-7,-2,3,5,-4}};
    //��ά����ĸ���ֵ��ʽ��������ѧ�������Լ���ΪԪ�صļ��ϵķ�ʽ
    print(*a,10,5);//��ά�����ڴ��ݵ�ַʱҪ����*a������a
    return 0;
}
//ע���������������ᷢ�־��������û�ж��룬������ô������룿