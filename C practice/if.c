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
                printf("�հ�");
            else
                printf("���հ�");
        }
    else
        printf("�߸��� ����\n");
    
    return 0;
}
// 0 <= a <= 100 �̷� �����ڴ� �� �޾Ƶ��̴� �� �ϴ�(�Ƹ��� �տ� �͸� �޾Ƶ��̴µ�?) 0 <= a && a <= 100 �̷��� ���� �� ��