//˼·������Ŀ����
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
    struct two pair={3,5};//��Ȼ�α�ֱ������Ϊa,�����ǲ��������κ��������������������ǲ�һ�������ͣ�
    //����ֱ����������ֵ�ᵼ��ÿ��������ֵ��ȷ���Ļ���Ҳ���Էֱ��pair.a��pair.b����ֵ
    printf("pair=(%d,%d)\n",pair.a,pair.b);
    pair=swap(pair);
    printf("pair=(%d,%d)\n",pair.a,pair.b);
    return 0;
}