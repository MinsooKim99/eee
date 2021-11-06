#include <iostream>
using namespace std;

int main()
{
    int* ptr=new int;
    *ptr=121687;

    cout << "똘똘똘이의 주소는 " << ptr <<"이고요 1벤티의 가격은 " << *ptr << "원 입니다." << endl;
    
    delete ptr; //delete는 new로 할당한 메모리만 해제할 수 있음, c언어에선 malloc()
    return 0;
}