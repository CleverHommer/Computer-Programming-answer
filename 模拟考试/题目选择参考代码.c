#include<stdio.h>
struct problem{
    char name[35];
    int h,t;
}p[105]={0};
void sort(struct problem* p,int n,int mode){
    int last=n-1;
    struct problem tmp={0};
    for(int i=0;i<n;i++){
        int k=last;
        last=-1;
        for(int j=0;j<k;j++){
            if(mode==1&&p[j].t>p[j+1].t){
                tmp=p[j];
                p[j]=p[j+1];
                p[j+1]=tmp;
                last=j;
            }
            if(mode==2&&p[j].h>p[j+1].h){
                tmp=p[j];
                p[j]=p[j+1];
                p[j+1]=tmp;
                last=j;
            }
        }
        if(last==-1) break;
    }
    return;
}
int main(){
    int n=0,m=0,mode=0;
    scanf("%d%d%d",&n,&m,&mode);
    for(int i=0;i<n;i++){
        scanf("%s%d%d",p[i].name,&p[i].t,&p[i].h);
    }
    sort(p,n,mode);
    if(mode==1){
        for(int i=0;i<m;i++){
            printf("%s %d\n",p[i].name,p[i].t);
        }
    }
    else{
        for(int i=0;i<m;i++){
            printf("%s %d\n",p[i].name,p[i].h);
        }
    }
    return 0;
}