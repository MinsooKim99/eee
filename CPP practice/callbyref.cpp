#include <iostream>
using namespace std;

void swap(int&,int&);
int main()
{
    int a,b;
    cout << "두 수를 입력하세요..." << endl;
    cin >> a >> b;
    swap(a,b);

    cout << "a는 " << a <<" b는 " << b << endl;

    return 0;
}
void swap(int &num1,int &num2)
{
    int temp;
    temp=num1;
    num1=num2;
    num2=temp;
}