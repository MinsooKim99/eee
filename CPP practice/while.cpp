#include <iostream>
using namespace std;

int main()
{
    //int i=0;
    int answer;
    cout << "��� �����?" << endl;
    cin >> answer;
    /*while (answer>i)
    {
        cout << "�� ��óİ� " << i+1 << "��° ����ϴ�" << endl;
        i++;
    }*/

    /*for (int a=0;a<answer;a++)
    {
        cout << "�� ��óİ� " << a+1 << "��° ����ϴ�" << endl;
    }
    
    cout << "��Ծ� ��!! �� �ܿ�谡 ���ִܴ�" << endl;*/

    /*int arr[5]={1,2,3,4,5};
    for (int a:arr)
    {
        cout << a << " ";
    }*/

    int total=0;
    /*for (int i=0;i<=answer;i++)
    {
        if (i%2==0)
            total+=i;

        else
            continue;        
    }
    cout << "1���� " << answer << "���� ¦���� ���� " << total << "�Դϴ�." << endl;*/

    int i=0;
    while(1)
    {
        total+=i;
        i++;
        if(i==answer+1)
            break;
    }
    cout << "1���� " << answer << "���� ���� " << total << "�Դϴ�." << endl;
   
    return 0;
}