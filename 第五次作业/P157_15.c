//思路：这一题要求从文件中读入数据，因此需要用到文件读取函数fscanf，文件读写相关内容可以参考课本3.4节，即P74,75
//下面的程序里就顺便实现了将结果用fprintf函数写入文件里的功能，对文件读写有兴趣的同学可以与助教进一步交流或者查询网络资料
#include<stdio.h>
#include<stdlib.h>//写文件读写建议调用这个库，方便使用exit函数中断程序
int input_data(int* a,int m){//这个m表示最多读入多少个数，而接下来两个函数的形参n表示有多少个数要处理
    int i=0;
    FILE *fp=fopen("P157_15_in.txt","r");//若文件与程序在同一文件夹内，可以只写文件名，否则要写电脑里的完整路径
    //打开文件，设置读写模式为“只读”，并用fp存储该文件的“地址”（不是文件在你电脑里的地址，所以打引号）
    if(fp==NULL){//若未能成功打开/创建文件，进行文件读写前必须要做的检查
        puts("Error!");
        exit(-1);//直接退出整个程序，不管目前在不在主函数里
    }
    for(;(i<10)&&(i<m);++i){//读入数量不能超过数组大小，且按题目要求最多读入10个数，去掉中间的i<10可以让程序读入文件内所有的数据
        if(fscanf(fp,"%d",&a[i])==EOF) break;//从fp指向的文件中读入数据并且判断有没有读到EOF，若有则文件结束，停止读入
    }
    fclose(fp);//读入完成，必须要关闭文件。如果后面还有用，到别的函数里关也行，程序结束前关掉就行
    return i;
}
void sort(int* a,int n){//按题目要求，使用选择排序
    int min=0,tmp=0,m=0;
    for(int i=0;i<n;i++){
        min=a[i];//重新给min赋初值，避免不在a中的初值反而成了最小值
        m=i;//m表示最小值具体在哪一个位置
        for(int j=i+1;j<n;j++){
            if(min>a[j]){
                min=a[j];
                m=j;
            }
        }
        tmp=a[i];
        a[i]=min;
        a[m]=tmp;
    }
    return;
}
double find_median(int* a,int n){
    double med=0;
    sort(a,n);
    if(n%2==0) med=(a[(n-1)/2]+a[(n+1)/2])/2.0;//用(double)进行隐式转换或者/2.0来进行double间的除法！
    else med=a[(n+1)/2];
    return med;
}
void output_data(double m){
    FILE *fp=fopen("P157_15_out.txt","w");//以“只写”模式打开文件,若不存在则创建。覆盖文件内已有的内容，不想覆盖可以用"a"模式
    if(fp==NULL){
        puts("Error!");
        exit(-1);
    }
    fprintf(fp,"%lf",m);
    fclose(fp);
    return;
}
int main(){
    int a[20]={0},n=0;//预留5格给函数读入，再预留5格防止越界所以数组大小开到20
    double med=0;
    n=input_data(a,15);
    med=find_median(a,n);
    output_data(med);
    return 0;
}