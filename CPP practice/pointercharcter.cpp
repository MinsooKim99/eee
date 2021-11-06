#include <iostream>
#include <string>
using namespace std;

int main()
{
    const int MAX_SIZE = 20;
    char streamer[MAX_SIZE];
    char streamer_name[MAX_SIZE];

    cout << "당신이 좋아하는 스트리머는?" << endl;
    //cin >> streamer;
    cin.get(streamer,MAX_SIZE).get();
    cout << "그 스트리머의 본명은?" << endl;
    //cin >> streamer_name;
    cin.get(streamer_name,MAX_SIZE).get();
    
    cout << streamer << "님의 본명은 " << streamer_name << " 입니다" << endl;

    string name; //글자수제한없음
    cout << "근데 당신의 닉네임은?" << endl;
    getline(cin,name);
    cout << "당신은 " << name << "님이군요!" << endl;
    
    return 0;
}