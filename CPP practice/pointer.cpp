#include <iostream>
using namespace std;

int main()
{
    /*int a=121687;
    int *ptr=&a;
    int **pptr=&ptr;

    cout << "저런! 똘똘똘이는 원신에 " << *ptr <<"원을 몇번이나 쓴거죠?" << endl;
    cout << "저런! 똘똘똘이는 원신에 " << **pptr <<"원을 몇번이나 쓴거죠?" << endl;
    cout << "121687원의 주소는 " << ptr <<"였네요!" << endl;
    cout << "121687원의 주소는 " << *pptr <<"였네요!" << endl;
    cout << "121687원의 주인인 똘똘똘이의 주소는 " << pptr <<"이네요!" << endl;*/

    int array[5]={1,2,3,4,5};
    int *ptr_arr=array;
    //for (int i=0;i<5;i++)
        //cout << ptr_arr[i] << endl;

    for (int i=0;i<5;i++)
        cout << *(array+i) << endl;

    //array[n]==*(array+n)
    
    cout << "array의 크기는 " << sizeof(array) << endl;
    cout << "array 포인터의 크기는 " << sizeof(ptr_arr) << endl;
    
    return 0;
}