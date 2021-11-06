#include <stdio.h>

int main()
{
    int a,num1,num2,num3,num4,num5;
    
    scanf("%d",&a);
    
    num1=a%10;
    a=(a-num1)/10;
    num2=a%10;
    a=(a-num2)/10;
    num3=a%10;
    a=(a-num3)/10;
    num4=a%10;
    a=(a-num4)/10;
    num5=a%10;
    a=(a-num5)/10;
    
    printf("%d %d %d %d %d\n",num1,num2,num3,num4,num5);
    
    return 0;
    
}