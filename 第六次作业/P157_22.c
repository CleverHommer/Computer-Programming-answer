//思路：利用结构体按要求实现功能
#include<stdio.h>
struct student{
    int No;
    char Name[20];
};
void input(struct student* stu,int n){
    for(int i=0;i<n;i++) scanf("%d %s",&stu[i].No,stu[i].Name);
    return;
}
void sort(struct student* stu,int n){
    struct student tmp={0};
    int book=1;
    for(int i=n-1,k=0;book==1;){
        book=0;
        k=i;
        for(int j=0;j<k;j++) if(stu[j].No>stu[j+1].No){
            tmp=stu[j];
            stu[j]=stu[j+1];
            stu[j+1]=tmp;
            i=j;
            book=1;
        }
    }
    return;
}
int strcmp(char* str1,char* str2){
    int i=0;
    for(;str1[i]!='\0';i++) if(str1[i]!=str2[i]) return 0;
    if(str2[i]=='\0') return 1;
    else return 0;
}
int find(char* Tofind,struct student* stu,int n){
    for(int i=0;i<n;i++) if(strcmp(Tofind,stu[i].Name)) return stu[i].No;
    return -1;
}
int main(){
    int k=0;
    char Tofind[20]={0};
    struct student stu[15]={0};
    input(stu,10);
    sort(stu,10);
    scanf("%s",Tofind);
    k=find(Tofind,stu,10);
    if(k==-1) puts("没有找到这个学生。");
    else printf("这个学生的学号是：%d\n",k);
    return 0;
}