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
void work(int *m,int n){//n��ʾ��ά����ڶ�ά�Ĵ�С
    int k=0;
    scanf("%d",&k);
    for(int i=0;i<k;i++){
        for(int j=0;j<k;j++){
            scanf("%d",m+i*n+j);
            //m������ǵ�ַ�������ټ�ȡ��ַ����
        }
    }
    for(int i=0;i<k;i++){
        for(int j=0;j<k-1;j++){
            printf("%d ",*(m+i*n+j));
            //���ö�ά������m[i][j]�ķ�ʽ������ѧ��ָ�����ά�������ϸ��
            //����Ҳ����дm[i*n+j],Ч����һ����
        }
        printf("%d\n",m[i*n+k-1]);
    }
    return;
}
int main(){
    int a[15][15]={{0,0,0,0},{0,0,0},{0,0}};
    //��ά���鸳��ֵ��������ѧ�б�ʾ�Լ���ΪԪ�صļ���
    work(*a,10);//���������a����ָ��һά�����ָ��
    //���*aָ��ľ��ǵ�һ�ж�Ӧ��һά������׵�ַ
    return 0;
}
//ע���������������ᷢ�־��������û�ж��룬������ô������룿