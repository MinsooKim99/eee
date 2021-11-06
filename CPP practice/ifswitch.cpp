#include <iostream>
using namespace std;

int main()
{
    int answer;
    cout << "제 937주차 로또방송 시작하겠습니다 당신이 고른 볼은 무엇인가요?" << endl;
    cin >> answer;

    /*if(answer < 7)
        cout << "너무 작네요 다음 기회에" << endl;
    
    else if (answer > 7)
        cout << "너무 크네요 다음 기회에" << endl;
    
    else
        cout << "평생연금 당첨!" << endl;*/

    switch(answer)//switch문-속도가 빠르며 보기 편한 대신 쓸 수 있는 상황이 적음 http://tcpschool.com/cpp/cpp_control_condition
    {
        case 7:
        cout << "평생연금 당첨!" << endl;
        break;    

        default:
        cout << "다음 기회에!" << endl;
        break;
    }

    return 0;
}