#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    long n;
    long i;
    printf("Enter a number: ");
    scanf("%ld", &n);                                           //����һ����

    if (n == 0) {
        return 1;                                               //�׳����������0! = 1
    }
    else if (n < 0)
    {
        printf("Invalid input");                                //���nС��0�������������Ϣ
    }
    else
    {
        i = n;                                                  //i��ֵΪn, ���ڼ���
        while (i != 1)                                          //��i������1ʱ��ѭ��
        {
            i = i - 1;                                          //i��1�� ֱ��i����1
            n = n * i;                                          //n����iѭ����ʵ�ֽ׳�
        }

        printf("�׳��� %ld", n);

    }
    return 0;
}