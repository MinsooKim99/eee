#include <stdio.h>
int main()
{
    //실수 표현 예제
    /*float a=7;
    double b=5;
    printf("%f\n",a);
    printf("%.3f\n",a);
    printf("%lf\n",b);
    printf("%.3lf",b);*/
    
    //const 상수 예제
    //const int year=2021;
    //int const year=2021; 이것도 가능
    //year=2020; year는 const를 이용한 상수라서 변경이 안됨
    //printf("%d\n",year);

    char str[256];
    printf("256자 이내의 글을 입력하세요.\n");
    scanf("%s",str,sizeof(str));//sizeof 함수는 배열이 차지하는 전체 공간
    printf("받아쓰기: %s\n",str);

    return 0;
}