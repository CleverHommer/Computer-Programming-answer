# include <stdio.h>
int main(){
    int num[3];
    int i,j,temp;
    printf("请输入三个整数(以空格分隔)：");
    scanf("%d %d %d", &num[0], &num[1], &num[2]);
    for(i=0;i<2;i++){
        for(j=0;j<2-i;j++){
            if(num[j]>num[j+1]){
                temp=num[j];
                num[j]=num[j+1];
                num[j+1]=temp;
            }
        }
    }
    printf("这三个整数按升序排列为：%d %d %d\n", num[0], num[1], num[2]);
    return 0;
}