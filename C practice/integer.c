#include <stdio.h>
#include <limits.h>

int main()
{
    char num1=-128;
    short num2=30000;
    int num3=-1234567890;
    long num4=1234567890;
    long long num5=-1234567890123456789;
    unsigned int num6=123123123;

    printf("%d %d %d %ld %lld %u\n",num1, num2, num3, num4, num5, num6);
    printf("sizeof �Լ��� �̿��� num3�� ũ�� = %d\n",sizeof(num3));
    printf("int���� ũ��: %d\nlong���� ũ��:%d\n",sizeof(int),sizeof(long));
    //������ long���� ������ 4����Ʈ,int�� ��ǻ�� ȯ�濡 ���� �޶���

    return 0;
}