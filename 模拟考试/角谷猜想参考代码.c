#include<stdio.h>
int is_prime(int n){
    if(n==1) return 0;
    for(int i=2;i*i<=n;i++){
        if(n%i==0) return 0;
    }
    return 1;
}
int check(int n){
    int l=0;
    for(;;l++){
        if(n==1) break;
        if(n%2==1) n=n*3+1;
        else n=n/2;
    }
    return l;
}
int main(){
    int n=0,l=0;
    scanf("%d",&n);
    while(1){
        n++;
        if(!is_prime(n)) continue;
        l=check(n);
        if(is_prime(l)){
            printf("%d %d",n,l);
            break;
        }
    }
    return 0;
}