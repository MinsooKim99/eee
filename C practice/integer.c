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
    printf("sizeof 함수를 이용한 num3의 크기 = %d\n",sizeof(num3));
    printf("int형의 크기: %d\nlong형의 크기:%d\n",sizeof(int),sizeof(long));
    //실제로 long형은 무조건 4바이트,int는 컴퓨터 환경에 따라 달라짐

    return 0;
}