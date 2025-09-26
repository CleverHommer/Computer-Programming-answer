#include<stdio.h>
int main() {
    int data[8];
    printf("please enter eight integers to be sorted:\n");
    int i;
    for (i = 1; i <= 8; i++) {
        scanf("%d", &data[i]);
    }

    int p, q, temp;
    for (p = 1; p <= 8; p++) {
        for (q = 1; p+q<= 8; q++) {
            if (data[p] > data[p+q]) {
                temp = data[p], data[p] = data[p+q];
                data[p+q] = temp;
            }
        }
    }
    printf("the sorted result is as follows:\n");
    int j;
    for (j = 1; j <= 8; j++) {
        printf("%d  ", data[j]);
    }
    return 0;
}