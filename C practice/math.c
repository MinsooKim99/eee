#include <stdio.h>
#include <math.h>

int main()
{
    float a=7.25;
    float b=4.97;
    printf("%f\n",fmodf(a,b));

    double c=8.25;
    double d=4.97;
    printf("%lf\n",fmod(c,d));
    //fmod double�� fmodf float�� fmodl long double��
    
    return 0;
}