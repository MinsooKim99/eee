#include <iostream>
using namespace std;

struct Prop
{
	int savings;
	int loan;	
};

Prop InitProperty();
int CalcProperty(const Prop*);

int main()
{
	Prop hong;
	int hong_prop;
	
	hong = InitProperty();
	hong_prop = CalcProperty(&hong); // ����ü�� ��� ������ �Լ��� �μ��� ������ 
	
	cout << "ȫ�浿�� ����� ���� " << hong.savings << "���� ���� " << hong.loan 
		<< "���� ������ �� " << hong_prop << "���Դϴ�." << endl;
    //�е� ����Ʈ:����ü�� ũ��� ���� ū ������ �������� �޸��� ũ�⸦ ����(int�� 4����Ʈ�� 4�ǹ���� ����)
    cout << "���! Prop ����ü�� ũ��� " << sizeof(Prop) << "�Դϴ�" << endl;

	return 0;
}

Prop InitProperty()
{
	Prop hong_prop = {10000000, 4000000};
	return hong_prop; // ����ü�� �Լ��� ��ȯ������ ��ȯ��.
}

int CalcProperty(const Prop* money) // const Ű���带 ����Ͽ� ����ü�� �����͸� ���� �����ϴ� ���� ������.
{
	//money->savings = 100; // ȣ��� �Լ����� ���� ����ü�� �����͸� ���� �Ұ�
	return (money->savings - money->loan);
}