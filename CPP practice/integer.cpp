#include <iostream>
using namespace std;

int main()
{
    /*int a,b;
    cout << "숫자는 사드세요 제발..." << endl;
    cin >> a >> b;
    cout << "첫번째 숫자는 " << a << "이며 두번째 숫자는 " << b << "입니다" << endl;*/
    cout << "short : " << sizeof(short) << endl;
    cout << "int : " << sizeof(int) << endl;
    cout << "long : " << sizeof(long) << endl;
    cout << "float : " << sizeof(float) << endl;
    cout << "double : " << sizeof(double) << endl;
    cout << "long double : " << sizeof(long double) << endl;
    
    /*int a=1;
    int b=4;
    double num1=a/b;            //int끼리의 연산이라 결과도 int형으로 나옴 >> 형변환 필요
    double num2=(double)a/b;    //c,c++ 둘다 가능
    double num3=double(a)/b;    //c++에서만 가능
    cout << "num1 = " << num1 << endl;
    cout << "num2 = " << num2 << endl;
    cout << "num3 = " << num3 << endl;*/

    int a=100;
    int b=200;
    int result;
    result=(a<b)?a:b;   //a보다 b가 크냐?: 참이면 a출력 거짓이면 b출력  { (조건식)? 변수1:변수2 }
    cout << "result = " << result << endl;
    
    return 0;
}