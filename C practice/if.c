#include <stdio.h>
int main()
{
    int l,e,m,s;
    float total;
    scanf("%d %d %d %d",&l,&e,&m,&s);

    if (0<=l && l<=100 && 0<=e && e<=100 &&  0<=m && m<=100 && 0<=s && s<=100)
        {
            total=(l+e+m+s)/4;
            if (total>=85)
                printf("합격");
            else
                printf("불합격");
        }
    else
        printf("잘못된 점수\n");
    
    return 0;
}
// 0 <= a <= 100 이런 연산자는 못 받아들이는 듯 하니(아마도 앞에 것만 받아들이는듯?) 0 <= a && a <= 100 이렇게 따로 할 것