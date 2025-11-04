//思路：按照题目要求一个个功能来实现，程序很长，需要充分了解程序的结构
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>//这个库提供一些windows系统相关的操作，有兴趣的同学可以自行了解
void printmenu(void){
    system("cls");//将终端清空，避免程序运行几次过后输出过的东西太多屏幕显示不完
    puts("请选择要进行的操作：（输入对应序号）");
    puts("(1) 生成/输入数据");
    puts("(2) 对数据进行排序");
    puts("(3) 查询数据");
    puts("(4) 退出程序");
    return;
}
void printArray(int* a,int n){
    for(int i=0;i<n-1;i++) printf("%d ",a[i]);
    printf("%d\n",a[n-1]);
    system("pause");//重新输出菜单前会清屏，用这行代码可以让程序停住，方便用户查看生成的数组
    return;
}
int input(int* a,int m){
    int n=0,mode=0;
    puts("要生成/输入多少个数据？");
    scanf("%d",&n);
    if(n>m){//记得限制数据个数不能超过数组大小
        puts("数据太多了！");
        system("pause");
        return -1;
    }
    puts("如何生成数据？1-随机生成；2-生成斐波那契数列；3-手动输入");
    scanf("%d",&mode);
    switch(mode){
        case 1:{
            for(int i=0;i<n;i++) a[i]=rand()%1000;
            puts("生成的随机数据如下：");
            printArray(a,n);
            break;
        }
        case 2:{
            a[0]=1;
            if(n>1) a[1]=1;
            for(int i=2;i<n;i++) a[i]=a[i-1]+a[i-2];
            puts("生成的斐波那契数列如下：");
            printArray(a,n);
            break;
        }
        case 3:{
            for(int i=0;i<n;i++) scanf("%d",&a[i]);
            break;
        }
        default:{
            puts("无效操作！");
            system("pause");
            return -1;
        }
    }
    return n;
}
void sort(int* a,int n){
    int tmp=0,book=1,t=0;//t标记排序方式，t=1为升序，t=0为降序
    puts("请选择排序方式：1-升序；2-降序");
    scanf("%d",&t);
    t=2-t;
    for(int i=n-1,k=0;book==1;){
        book=0;
        k=i;
        for(int j=0;j<k;j++) if(t?(a[j]>a[j+1]):(a[j]<a[j+1])){
            tmp=a[j];
            a[j]=a[j+1];
            a[j+1]=tmp;
            i=j;
            book=1;
        }
    }
    return;
}
int Search_binary(int* a,int n,int Tofind){
    int low=0,high=n-1,mid=0;
    while(low<=high){
        mid=(low+high)/2;
        if(a[mid]==Tofind) return mid;
        else if(a[mid]>Tofind) high=mid-1;
        else low=mid+1;
    }
    return -1;
}
int main(){
    srand((unsigned) time(NULL));
    int mode=0,n=0,a[25]={0},book=0;//book标记是否生成过数据
    while(1){//将程序保持在循环状态
        printmenu();
        scanf("%d",&mode);
        switch(mode){
            case 1:{
                n=input(a,20);
                if(n==-1) break;
                book=1;
                break;
            }
            case 2:{
                if(book==0){
                    puts("还没有生成/输入过数据！");
                    system("pause");
                    break;
                }
                sort(a,n);
                puts("排序后的数组元素如下：");
                printArray(a,n);
                break;
            }
            case 3:{
                if(book==0){
                    puts("还没有生成/输入过数据！");
                    system("pause");
                    break;
                }
                puts("请输入要查找的数据：");
                int Tofind=0,k=0;
                scanf("%d",&Tofind);
                k=Search_binary(a,n,Tofind);
                if(k==-1) printf("%d不是数组的一个元素！\n",Tofind);
                else printf("%d是数组中的第%d个元素。\n",Tofind,k+1);
                system("pause");
                break;
            }
            case 4:{
                puts("欢迎下次使用！");
                break;
            }
            default:{
                puts("无效操作");
                system("pause");
                break;
            }
        }
        if(mode==4) break;
    }
    return 0;
}