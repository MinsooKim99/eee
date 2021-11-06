#include <iostream>
using namespace std;

int bigNum(int,int);
void plusNum(int&);
int main()
{
    int a,b;
    cout << "더 큰 수를 골라드립니다 수를 2개 입력하세요" << endl;
    cin >> a >> b;
    if (bigNum(a,b)==0)
        cout << "두 수는 같아요" << endl;
    else
        cout << "더 큰 수는 " << bigNum(a,b) << "입니다" << endl;
    
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