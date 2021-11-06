#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int array[3]={1,2,3};
    int array2[2][3]={1,2,3,4,5,6};
    cout << array << endl;//array의 주소
    
    for (int a:array)
    {
        cout << a << " ";
    }
    cout << endl;

    for (int i=0;i<sizeof(array2)/sizeof(array2[0]);i++)
    {
        for (int j=0;j<sizeof(array2[0])/sizeof(array2[0][0]);j++)
        {
            //cout << array2[i][j] << " ";
            cout << setw(4) << array2[i][j];
        }
        cout << endl;
    }
    cout << endl;

    int len=sizeof(array)/sizeof(array[0]);
    cout << "array의 크기는 " << len << "입니다." << endl;
    int len2=sizeof(array2)/sizeof(array2[0]);
    cout << "array2의 행은 " << len2 << "입니다." << endl;
    int len3=sizeof(array2)/sizeof(array2[0][0]);
    cout << "array2의 크기는 " << len3 << "입니다." << endl;
    int len4=sizeof(array2[0])/sizeof(array2[0][0]);
    cout << "array2의 열은 " << len4 << "입니다." << endl;




    return 0;
}