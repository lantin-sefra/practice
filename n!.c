#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    long n;
    long i;
    printf("Enter a number: ");
    scanf("%ld", &n);                                           //输入一个数

    if (n == 0) {
        return 1;                                               //阶乘特殊情况。0! = 1
    }
    else if (n < 0)
    {
        printf("Invalid input");                                //如果n小于0，则输出错误信息
    }
    else
    {
        i = n;                                                  //i赋值为n, 用于计数
        while (i != 1)                                          //当i不等于1时，循环
        {
            i = i - 1;                                          //i减1， 直到i等于1
            n = n * i;                                          //n乘以i循环，实现阶乘
        }

        printf("阶乘是 %ld", n);

    }
    return 0;
}