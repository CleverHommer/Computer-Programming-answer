//˼·����������ָ���ǣ��������������䷴ת��Ҳ�������������������һ����100��1000��ѭ�����ж�ÿ�����Ƿ�����Ҫ���������Ҫ�����
#include<stdio.h>
int is_prime(int n){
    int book=1;//book=1��ʾn��������book=0��n��������
    for(int i=2;i*i<=n;i++){//����ѧ֪ʶ������֪���κη�����nһ�����в�����n������ƽ����������
        if(n%i==0){
            book=0;
            break;//�ҵ�n��һ����ƽ�����Ӿ͹���
        }
    }
    return book;//book�еǼǣ���¼����˼��Ҳ����ϲ����mark,token�ȴ��������б������ı���
}
int reverse(int n){
    int rev=0;
    while(n!=0){
        rev*=10;
        rev+=n%10;
        n/=10;
    }
    return rev;
}
int main(){
    int count=0;
    for(int i=100;i<1001;i++){
        if(is_prime(i)&&is_prime(reverse(i))){
            if(count==5){//6��һ�У������Ķ�
                printf("%d\n",i);
                count=0;
            }
            else{
                printf("%d ",i);
                count++;
            }
        }
    }
    return 0;
}