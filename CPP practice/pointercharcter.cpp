#include <iostream>
#include <string>
using namespace std;

int main()
{
    const int MAX_SIZE = 20;
    char streamer[MAX_SIZE];
    char streamer_name[MAX_SIZE];

    cout << "����� �����ϴ� ��Ʈ���Ӵ�?" << endl;
    //cin >> streamer;
    cin.get(streamer,MAX_SIZE).get();
    cout << "�� ��Ʈ������ ������?" << endl;
    //cin >> streamer_name;
    cin.get(streamer_name,MAX_SIZE).get();
    
    cout << streamer << "���� ������ " << streamer_name << " �Դϴ�" << endl;

    string name; //���ڼ����Ѿ���
    cout << "�ٵ� ����� �г�����?" << endl;
    getline(cin,name);
    cout << "����� " << name << "���̱���!" << endl;
    
    return 0;
}