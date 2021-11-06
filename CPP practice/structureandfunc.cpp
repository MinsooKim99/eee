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
	hong_prop = CalcProperty(&hong); // 구조체의 멤버 변수를 함수의 인수로 전달함 
	
	cout << "홍길동의 재산은 적금 " << hong.savings << "원에 대출 " << hong.loan 
		<< "원을 제외한 총 " << hong_prop << "원입니다." << endl;
    //패딩 바이트:구조체의 크기는 제일 큰 변수를 기준으로 메모리의 크기를 맞춤(int가 4바이트라서 4의배수로 맞춤)
    cout << "잠깐! Prop 구조체의 크기는 " << sizeof(Prop) << "입니다" << endl;

	return 0;
}

Prop InitProperty()
{
	Prop hong_prop = {10000000, 4000000};
	return hong_prop; // 구조체를 함수의 반환값으로 반환함.
}

int CalcProperty(const Prop* money) // const 키워드를 사용하여 구조체의 데이터를 직접 수정하는 것을 방지함.
{
	//money->savings = 100; // 호출된 함수에서 원본 구조체의 데이터를 변경 불가
	return (money->savings - money->loan);
}