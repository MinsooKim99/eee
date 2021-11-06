#include <iostream>
#include <string>
//#define MAX_NAME_SIZE 10
using namespace std;

class bank{
    private:
        string name;
        int id;
        int account;
    public:
        //bank (string _name, int _id, int _account);
        bank()
        {
            name="default";
            id=0000;
            account=0;
        }
        void copy(string _name, int _id, int _account)
        {
        this->name=_name;
        this->id=_id;
        this->account=_account;
        }
        void createaccount();
        void deposit();
        void withdraw();
        void showaccount();
        void showinfo();
};
/*bank::bank(string _name, int _id, int _account)
{
    name=_name;
    id=_id;
    account=_account;
}*/
void showmenu();

int main()
{
    int num;
    bank p;
    while(1)
    {
        void showmenu();
        cin >> num;
        switch(num)
        {
            case 0:
                return 0;
            case 1:
                p.createaccount();
                break;
            case 2:
                p.deposit();
                break;
            case 3:
                p.withdraw();
                break;
            case 4:
                p.showaccount();
                break;
            case 5:
                p.showinfo();
                break;
            default:
                cout << "0~5중 하나의 숫자를 입력해주세요." << endl;
                break;
        }
    }
    
    return 0;
}
void showmenu() //시작화면을 띄움
{
    cout << "------------Menu------------" << endl;
    cout << "0. 프로그램 종료" << endl;
    cout << "1. 계좌 개설" << endl;
    cout << "2. 입금" << endl;
    cout << "3. 출금" << endl;
    cout << "4. 계좌 정보" << endl;
    cout << "5. 프로그램 정보" << endl;
    cout << "번호를 입력하세요: ";
}
void bank::createaccount() // 계좌를 만듬
{
    int id;
    string name;
    int deposit;
    cout << "[계좌 개설]" << endl;
    cout << "id를 입력하세요." << endl;
    cin >> id;
    cout << "이름을 입력하세요." << endl;
    getline(cin,name);
    cout << "입금할 금액을 입력하세요..." << endl;
    cin >> deposit;
    if (deposit<0){
        while (deposit<0){
        cout << "에러:0이상의 수를 입력하세요." << endl;
        cout << "입금할 금액을 입력하세요..." << endl;
        cin >> deposit;
        }
    }
    copy(name,id,deposit);
    cout << "[계좌 개설이 완료되었습니다.]" << endl;
    cout << "id: " << id << endl;
    cout << "이름: " << name << endl;
    cout << "잔액: " << deposit << endl;
}
void bank::deposit() // 입력한 금액을 입금함
{
    int deposit;
    cout << "입금할 금액을 입력하세요..." << endl;
    cin >> deposit;
    if (deposit<0){
        while (deposit<0){
        cout << "에러:0이상의 수를 입력하세요." << endl;
        cout << "입금할 금액을 입력하세요..." << endl;
        cin >> deposit;
        }
    }
    account+=deposit;
    cout << "고객님의 잔액은 " << account << "원 입니다." << endl;
}
void bank::withdraw() // 입력한 금액을 출금함
{
    int withdraw;
    cout << "출금할 금액을 입력하세요..." << endl;
    cin >> withdraw;
    if (withdraw<0){
        while (withdraw<0){
        cout << "에러:0이상의 수를 입력하세요." << endl;
        cout << "출금할 금액을 입력하세요..." << endl;
        cin >> withdraw;
        }
    }
    account-=withdraw;
    cout << "고객님의 잔액은 " << account << "원 입니다." << endl;
}
void bank::showaccount() // 계좌 잔액을 보여줌
{
    cout << "고객님의 잔액은 " << account <<"원 입니다." << endl;
}
void bank::showinfo() // 개발자 정보
{
    cout << "제작자 김민수" << endl;
    cout << "Copyright by Teast" << endl;
}