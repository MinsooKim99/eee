#include <stdio.h>
int main()
{
    //�Ǽ� ǥ�� ����
    /*float a=7;
    double b=5;
    printf("%f\n",a);
    printf("%.3f\n",a);
    printf("%lf\n",b);
    printf("%.3lf",b);*/
    
    //const ��� ����
    //const int year=2021;
    //int const year=2021; �̰͵� ����
    //year=2020; year�� const�� �̿��� ����� ������ �ȵ�
    //printf("%d\n",year);

    char str[256];
    printf("256�� �̳��� ���� �Է��ϼ���.\n");
    scanf("%s",str,sizeof(str));//sizeof �Լ��� �迭�� �����ϴ� ��ü ����
    printf("�޾ƾ���: %s\n",str);

    return 0;
}