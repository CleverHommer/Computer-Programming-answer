//思路：如题目描述
#include<stdio.h>
struct two{
    int a,b;
};
struct two swap(struct two pair){
    int t=pair.a;
    pair.a=pair.b;
    pair.b=t;
    return pair;
}
int main(){
    struct two pair={3,5};//虽然课本直接起名为a,但还是不建议有任何两个变量重名（哪怕是不一样的类型）
    //担心直接这样赋初值会导致每个变量的值不确定的话，也可以分别对pair.a和pair.b赋初值
    printf("pair=(%d,%d)\n",pair.a,pair.b);
    pair=swap(pair);
    printf("pair=(%d,%d)\n",pair.a,pair.b);
    return 0;
}