#include <stdio.h>

void *add(int i, int j);
void *subtract(int i, int j);
void *multiply(int i, int j);
void *divide(double i, double j);

int main () 
{
	int a, b;
	void *p;
	// int *p;
	double *p_double;

	printf("첫번째 수를 입력하세요: ");
	scanf("%d", &a);

	printf("두번째 수를 입력하세요: ");
	scanf("%d", &b);

	// p = (int*)add(a, b);
	p = add(a, b);
	printf("add 결과는 %d 입니다. \n", *((int*)p));

	// p = (int*)subtract(a, b);
	p = subtract(a, b);
	printf("sub 결과는 %d 입니다. \n", *((int*)p));

	// p = (int*)multiply(a, b);
	p = multiply(a, b);
	printf("mul 결과는 %d 입니다. \n", *((int*)p));

	// p = (double*)divide(a, b);
	p = divide(a, b);
	printf("div 결과는 %.2lf 입니다. \n", *((double*)p));

	return 0;
}

void *add(int i, int j) {
	
	// void *p;
	static int result;

	// p = &result;

	result = i + j;

	return &result;
}

void *subtract(int i, int j) {
	
	void *p;
	static int result;

	p = &result;

	result = i - j;

	return p;
}

void *multiply(int i, int j) {
	
	void *p;
	static int result;

	p = &result;

	result = i * j;

	return p;
}

void *divide(double i, double j) {
	
	void *p;
	static double result;

	p = &result;

	result = i / j;

	return p;
}