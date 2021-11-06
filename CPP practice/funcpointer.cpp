#include <iostream>
using namespace std;

typedef double (*Arith)(double, double); // typedef Ű���带 �̿��� ���ο� �̸� ���� 

double Add(double, double);
double Sub(double, double);
double Mul(double, double);
double Div(double, double);
double Calculator(double , double, Arith);

int main(void)
{
	Arith calc = NULL; // �Լ� ������ ����
    double num1 = 4, num2 = 5, result = 0;
    char oper = '+';
    
    switch (oper)
    {
        case '+' :
            calc = Add;
            break;
        case '-':
            calc = Sub;
            break;
        case '*':
            calc = Mul;
            break;
        case '/':
            calc = Div;
            break;
        default:
        	cout << "��Ģ����(+, -, *, /)���� �����մϴ�.";
    }
     
    result = Calculator(num1, num2, calc);
    cout << "��Ģ ������ ����� " << result << "�Դϴ�.";
    return 0;	
}

double Add(double num1, double num2)
{
	return num1 + num2;
}

double Sub(double num1, double num2)
{
	return num1 - num2;
}

double Mul(double num1, double num2)
{
	return num1 * num2;
}

double Div(double num1, double num2)
{
	return num1 / num2;
}

double Calculator(double num1, double num2, Arith func)
{
    return func(num1, num2);
}