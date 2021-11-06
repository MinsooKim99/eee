#include <iostream>
#include <string>
using namespace std;

int main()
{
    string dog;
    cout << "초기화를 안한 string변수의 길이는 " << dog.length() << "입니다" << endl;
    string cat="hoyamiyaduya";
    cout << "초기화를 한 12글자짜리 string변수의 길이는 " << cat.length() << "입니다" << endl; //length()랑 size()는 언제나 같은 값 출력하지만 length는 문자열길이 size는 실제 사용하는 크기
    dog=cat; //대입연산 가능
    cout << dog << " 화이팅" << endl;
    
    string jadong="jaya";
    string tranth;
    //tranth= cat + jadong; //덧셈연산가능
    tranth.append(cat);
    tranth.append(jadong);
    cout << tranth << " 화이팅" << endl;

    if (tranth.find("jaya")!=string::npos)//find()함수는 문자열 못찾으면 string::npos라는 상수를 반환함
        cout << "jaya는 tranth문자열에 포함되었네요!" << endl;
    else
        cout <<"jaya는 tranth문자열에 없었네요.." << endl;

    
    return 0;
}