#include <iostream>
using namespace std;

int bigNum(int,int);
void plusNum(int&);
int main()
{
    int a,b;
    cout << "�� ū ���� ���帳�ϴ� ���� 2�� �Է��ϼ���" << endl;
    cin >> a >> b;
    if (bigNum(a,b)==0)
        cout << "�� ���� ���ƿ�" << endl;
    else
        cout << "�� ū ���� " << bigNum(a,b) << "�Դϴ�" << endl;
    
    plusNum(a);
    cout << a << endl;
    return 0;
}
int bigNum(int x,int y)
{
    if (x<y)
        return y;
    else if (x>y)
        return x;
    else
        return 0;
}
void plusNum(int &num)
{
    num++;
}