#include <iostream>
#include <string>
using namespace std;

int main()
{
    struct streamer
    {
        string nickname;
        string name;
        int follower;
    };
    streamer jadong;
    //streamer.jadong={jadong,�̵���,87000}; �ʱ�ȭ ���� ������Ѱ� 0���� �ʱ�ȭ
    //jadong.nickname="jadong";
    //jadong.name="�̵���";
    //jadong.follower=87000;
    cout << "�ڵ����� �г�����?" << endl;
    getline(cin,jadong.nickname);
    cout << "�ڵ����� �̸���?" << endl;
    getline(cin,jadong.name);
    cout << "�ڵ����� �ȷο� ����?" << endl;
    cin >> jadong.follower;

    cout << "�ڵ����� �г����� " << jadong.nickname << "�̰� �ڵ����� �̸��� " << jadong.name <<"�̸� �ڵ����� �ȷο��� " << jadong.follower << "�� �Դϴ� �Ϳ�!" << endl;

    return 0;
}