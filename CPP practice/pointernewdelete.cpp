#include <iostream>
using namespace std;

int main()
{
    int* ptr=new int;
    *ptr=121687;

    cout << "�ʶʶ����� �ּҴ� " << ptr <<"�̰�� 1��Ƽ�� ������ " << *ptr << "�� �Դϴ�." << endl;
    
    delete ptr; //delete�� new�� �Ҵ��� �޸𸮸� ������ �� ����, c���� malloc()
    return 0;
}