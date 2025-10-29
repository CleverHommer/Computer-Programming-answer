#include<stdio.h>
#include<math.h>
int main(){
    int x,y,z,p=(x+y+z)/2;
    float S=sqrt(p*(p-x)*(p-y)*(p-z));
    
    printf("输入三角形的3个边:");
    scanf("%d %d %d",&x,&y,&z);
    
    if(x+y>z&&y+z>x&&z+x>y){
        if(x==y&&y==z&&z==x){
            printf("边长为%d,%d,%d的三角形是等边三角形,其面积为:%f",x,y,z,S);
        }else if(x==y||y==z||z==x){
            printf("边长为%d,%d,%d的三角形是等腰三角形,其面积为:%f",x,y,z,S);
        }else if(x*x+y*y==z*z||y*y+z*z==x*x||z*z+x*x==y*y){
            printf("边长为%d,%d,%d的三角形是直角三角形,其面积为:%f",x,y,z,S);
        }else{
            printf("边长为%d,%d,%d的三角形是一般三角形,其面积为:%f",x,y,z,S);
        }
    }else{
        printf("Error");
    }
    
    return 0;
}