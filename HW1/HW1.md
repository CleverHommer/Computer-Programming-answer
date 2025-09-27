# 第一次作业
**author:** Hommer  

**date:** 0917

## 1. 怎么理解现实世界信息抽象为数据的意义？
将现实世界的事物抽象化，以便于计算机系统进行处理和分析

## 2. 什么是文件？其主要作用为何？文本文件主要特点是什么？C语言程序是文本文件么？
文件是记录在外存上的相关信息的命名组合。

用于永久保存内存中的程序和数据。

以字符编码格式存储的文件称为文本文件。

是的。

## 3. 什么是算法？列举任何2个实际例子，描述它们的算法
广义的算法是指解题方案的准确而完整的描述。狭义：“算法”是一个为解决某类问题或完成某项任务所设计的有限步骤序列。

**实际例子：**
1. **排序算法**（如快速排序）：
   - 步骤：选择一个基准元素，将数组分成两部分，递归排序两部分。
2. **二分查找算法**：
   - 步骤：在有序数组中，反复将搜索区间折半，直到找到目标元素或搜索区间为空。

## 4. 简述C语言程序设计一般有哪几个工作阶段？
需求分析与设计 → 编码 → 编译 →（链接 →） 测试与调试 → 维护

## 5. 编写一个完整C程序，运行并输出一下图形：
```dotnetcli
*****
 *****
  *****
```
(程序不唯一)
```dotnetcli
#include<stdio.h>
int main(){
printf("*****\n *****\n  *****\n");
return 0;
}
```

## 6. 编写一段代码，实现：忽略其它输入，将所有小写字母转换为大写字母，大写字母转换为小写字母，并显示。
```dotnetcli
#include<stdio.h> 
int main() {
    char c;
    printf("Please input a string, if want to stop, just input 0.\n");
    while((c=getchar()) != EOF && c != '0') {
        if(c >= 'a' && c <= 'z') {
            c = c - 32;
        } else if(c >= 'A' && c <= 'Z') {
            c = c + 32; 
        }
        putchar(c);
    }
    return 0;
}

```
## 7. 设计一个程序，测试至少三种整型类型的取值范围以及溢出的效果。
```dotnetcli
#include <stdio.h>
#include <limits.h>

int main() {
    printf("Testing int: %d to %d\n", INT_MIN, INT_MAX);
    printf("Testing long: %ld to %ld\n", LONG_MIN, LONG_MAX);
    printf("Testing short: %hd to %hd\n", SHRT_MIN, SHRT_MAX);

    int i = INT_MAX;
    printf("Overflow of int: %d\n", i + 1);

    long l = LONG_MAX;
    printf("Overflow of long: %ld\n", l + 1);

    short s = SHRT_MAX;
    printf("Overflow of short: %hd\n", s + 1);

    return 0;
}

```


## 8. 如何以下面的格式输出变量words和lines的值（这里3020和350表示两个变量的值）？请写出相关语句。
```dotnetcli
#include <stdio.h>

int main() {
    int words = 3020;
    int lines = 350;

    printf("There were %d words and %d lines.\n", words, lines);

    return 0;
}
```

  