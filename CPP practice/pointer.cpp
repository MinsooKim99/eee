#include <iostream>
using namespace std;

int main()
{
    /*int a=121687;
    int *ptr=&a;
    int **pptr=&ptr;

    cout << "����! �ʶʶ��̴� ���ſ� " << *ptr <<"���� ����̳� ������?" << endl;
    cout << "����! �ʶʶ��̴� ���ſ� " << **pptr <<"���� ����̳� ������?" << endl;
    cout << "121687���� �ּҴ� " << ptr <<"���׿�!" << endl;
    cout << "121687���� �ּҴ� " << *pptr <<"���׿�!" << endl;
    cout << "121687���� ������ �ʶʶ����� �ּҴ� " << pptr <<"�̳׿�!" << endl;*/

    int array[5]={1,2,3,4,5};
    int *ptr_arr=array;
    //for (int i=0;i<5;i++)
        //cout << ptr_arr[i] << endl;

    for (int i=0;i<5;i++)
        cout << *(array+i) << endl;

    //array[n]==*(array+n)
    
    cout << "array�� ũ��� " << sizeof(array) << endl;
    cout << "array �������� ũ��� " << sizeof(ptr_arr) << endl;
    
    return 0;
}