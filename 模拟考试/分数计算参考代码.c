#include<stdio.h>
#include<math.h>
int calc1(int n,int* x,int* y){
    int res=0;
    for(int i=0;i<n;i++) if(((x[i]+y[i]<100)?(x[i]+y[i]):100)>=85) res++;
    return res;
}
int calc2(int n,int* x,int* y){
    int res=0;
    for(int i=0;i<n;i++) if(0.9*x[i]+y[i]>=85) res++;
    return res;
}
int calc3(int n,int* x){
    int res=0;
    for(int i=0;i<n;i++) if(x[i]>=73) res++;
    return res;
}
int main(){
    int n=0,x[105]={0},y[105]={0},m[5]={0},meth=0,max=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d %d",&x[i],&y[i]);
    }
    m[1]=calc1(n,x,y);
    m[2]=calc2(n,x,y);
    m[3]=calc3(n,x);
    n=(int)(n*0.4);
    for(int i=1;i<=3;i++){
        if(m[i]>n) continue;
        if(m[i]>max){
            meth=i;
            max=m[i];
        }
    }
    if(meth==0){
        printf("Í¬Ñ§ÃÇÌ«°ôÀ²");
    }
    else{
        printf("%d %d",meth,max);
    }
    return 0;
}