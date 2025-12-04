//思路：每次循环标记最后一次发生交换的位置，下一次循环最多运行到这个位置
#include<stdio.h>
#include<stdlib.h>
void sort(int* a,int n){
    int tmp=0,book=1;//book标记一次循环中是否有发生交换
    for(int i=n-1,k=0;book==1;){//没有发生任何交换时结束循环
        book=0;
        k=i;
        for(int j=0;j<k;j++) if(a[j]>a[j+1]){
            tmp=a[j];
            a[j]=a[j+1];
            a[j+1]=tmp;
            i=j;//在整个循环结束后，i会停在最后一次发生交换的地方，后面的数据都已经排好序了
            book=1;
        }
    }
    return;
}
int main(){
    int a[105]={0},n=0;
    FILE* fp=fopen("P157_16_in.txt","r");
    if(fp==NULL){
        puts("Error!");
        exit(-1);
    }
    fscanf(fp,"%d",&n);
    for(int i=0;i<n;i++) fscanf(fp,"%d",&a[i]);
    fclose(fp);
    fp=fopen("P157_16_out.txt","w+");
    if(fp==NULL){
        puts("Error!");
        exit(-1);
    }
    sort(a,n);
    for(int i=0;i<n;i++) fprintf(fp,"%d ",a[i]);
    fclose(fp);
    return 0;
}