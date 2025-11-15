#include<stdio.h>
#include<stdlib.h>
#include<time.h>
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
    srand(time(NULL));
    int n=0,m=0,mode=0,len=0,cap=0,h[1005]={0},t[1005]={0};
    puts("n?");
    scanf("%d",&n);
    if(n==-1) n=(rand()*79)%96+5;
    m=(rand()*1009)%n+1;
    mode=rand()%2+1;
    printf("%d %d %d\n",n,m,mode);
    for(int i=0;i<n;i++){
        len=(rand()*443)%18+3;
        for(int j=0;j<len;j++){
            cap=(rand()*19)%5;
            p[i].name[j]=(rand()*31)%26+97;
            if(cap==0) p[i].name[j]-=32;
        }
        do{
            p[i].t=(rand()*827)%1000+1;
        }while(t[p[i].t]);
        t[p[i].t]=1;
        do{
            p[i].h=(rand()*131)%1000+1;
        }while(h[p[i].h]);
        h[p[i].h]=1;
        printf("%s %d %d\n",p[i].name,p[i].t,p[i].h);
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