#include<stdio.h>

int main() {

int shu, ge, shi, bai;

int qiuhe;

for (shu = 100; shu < 1000; shu++) {

ge = shu % 10;

shi = (shu / 10) % 10;

bai = shu / 100;

qiuhe = ge * ge * ge + shi * shi * shi + bai * bai * bai;

if (shu == qiuhe) {

printf("%d\n", shu);

}

}

}