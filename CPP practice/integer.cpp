#include <iostream>
using namespace std;

int main()
{
    /*int a,b;
    cout << "���ڴ� ��弼�� ����..." << endl;
    cin >> a >> b;
    cout << "ù��° ���ڴ� " << a << "�̸� �ι�° ���ڴ� " << b << "�Դϴ�" << endl;*/
    cout << "short : " << sizeof(short) << endl;
    cout << "int : " << sizeof(int) << endl;
    cout << "long : " << sizeof(long) << endl;
    cout << "float : " << sizeof(float) << endl;
    cout << "double : " << sizeof(double) << endl;
    cout << "long double : " << sizeof(long double) << endl;
    
    /*int a=1;
    int b=4;
    double num1=a/b;            //int������ �����̶� ����� int������ ���� >> ����ȯ �ʿ�
    double num2=(double)a/b;    //c,c++ �Ѵ� ����
    double num3=double(a)/b;    //c++������ ����
    cout << "num1 = " << num1 << endl;
    cout << "num2 = " << num2 << endl;
    cout << "num3 = " << num3 << endl;*/

    int a=100;
    int b=200;
    int result;
    result=(a<b)?a:b;   //a���� b�� ũ��?: ���̸� a��� �����̸� b���  { (���ǽ�)? ����1:����2 }
    cout << "result = " << result << endl;
    
    return 0;
}