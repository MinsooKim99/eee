#include <iostream>
using namespace std;

int main()
{
    int answer;
    cout << "�� 937���� �ζǹ�� �����ϰڽ��ϴ� ����� �� ���� �����ΰ���?" << endl;
    cin >> answer;

    /*if(answer < 7)
        cout << "�ʹ� �۳׿� ���� ��ȸ��" << endl;
    
    else if (answer > 7)
        cout << "�ʹ� ũ�׿� ���� ��ȸ��" << endl;
    
    else
        cout << "������� ��÷!" << endl;*/

    switch(answer)//switch��-�ӵ��� ������ ���� ���� ��� �� �� �ִ� ��Ȳ�� ���� http://tcpschool.com/cpp/cpp_control_condition
    {
        case 7:
        cout << "������� ��÷!" << endl;
        break;    

        default:
        cout << "���� ��ȸ��!" << endl;
        break;
    }

    return 0;
}