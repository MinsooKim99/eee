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
    //streamer.jadong={jadong,이동훈,87000}; 초기화 가능 선언안한건 0으로 초기화
    //jadong.nickname="jadong";
    //jadong.name="이동훈";
    //jadong.follower=87000;
    cout << "자동맨의 닉네임은?" << endl;
    getline(cin,jadong.nickname);
    cout << "자동맨의 이름은?" << endl;
    getline(cin,jadong.name);
    cout << "자동맨의 팔로워 수는?" << endl;
    cin >> jadong.follower;

    cout << "자동맨의 닉네임은 " << jadong.nickname << "이고 자동맨의 이름은 " << jadong.name <<"이며 자동맨의 팔로워는 " << jadong.follower << "명 입니다 와우!" << endl;

    return 0;
}