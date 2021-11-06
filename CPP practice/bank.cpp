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
                cout << "0~5�� �ϳ��� ���ڸ� �Է����ּ���." << endl;
                break;
        }
    }
    
    return 0;
}
void showmenu() //����ȭ���� ���
{
    cout << "------------Menu------------" << endl;
    cout << "0. ���α׷� ����" << endl;
    cout << "1. ���� ����" << endl;
    cout << "2. �Ա�" << endl;
    cout << "3. ���" << endl;
    cout << "4. ���� ����" << endl;
    cout << "5. ���α׷� ����" << endl;
    cout << "��ȣ�� �Է��ϼ���: ";
}
void bank::createaccount() // ���¸� ����
{
    int id;
    string name;
    int deposit;
    cout << "[���� ����]" << endl;
    cout << "id�� �Է��ϼ���." << endl;
    cin >> id;
    cout << "�̸��� �Է��ϼ���." << endl;
    getline(cin,name);
    cout << "�Ա��� �ݾ��� �Է��ϼ���..." << endl;
    cin >> deposit;
    if (deposit<0){
        while (deposit<0){
        cout << "����:0�̻��� ���� �Է��ϼ���." << endl;
        cout << "�Ա��� �ݾ��� �Է��ϼ���..." << endl;
        cin >> deposit;
        }
    }
    copy(name,id,deposit);
    cout << "[���� ������ �Ϸ�Ǿ����ϴ�.]" << endl;
    cout << "id: " << id << endl;
    cout << "�̸�: " << name << endl;
    cout << "�ܾ�: " << deposit << endl;
}
void bank::deposit() // �Է��� �ݾ��� �Ա���
{
    int deposit;
    cout << "�Ա��� �ݾ��� �Է��ϼ���..." << endl;
    cin >> deposit;
    if (deposit<0){
        while (deposit<0){
        cout << "����:0�̻��� ���� �Է��ϼ���." << endl;
        cout << "�Ա��� �ݾ��� �Է��ϼ���..." << endl;
        cin >> deposit;
        }
    }
    account+=deposit;
    cout << "������ �ܾ��� " << account << "�� �Դϴ�." << endl;
}
void bank::withdraw() // �Է��� �ݾ��� �����
{
    int withdraw;
    cout << "����� �ݾ��� �Է��ϼ���..." << endl;
    cin >> withdraw;
    if (withdraw<0){
        while (withdraw<0){
        cout << "����:0�̻��� ���� �Է��ϼ���." << endl;
        cout << "����� �ݾ��� �Է��ϼ���..." << endl;
        cin >> withdraw;
        }
    }
    account-=withdraw;
    cout << "������ �ܾ��� " << account << "�� �Դϴ�." << endl;
}
void bank::showaccount() // ���� �ܾ��� ������
{
    cout << "������ �ܾ��� " << account <<"�� �Դϴ�." << endl;
}
void bank::showinfo() // ������ ����
{
    cout << "������ ��μ�" << endl;
    cout << "Copyright by Teast" << endl;
}