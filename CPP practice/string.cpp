#include <iostream>
#include <string>
using namespace std;

int main()
{
    string dog;
    cout << "�ʱ�ȭ�� ���� string������ ���̴� " << dog.length() << "�Դϴ�" << endl;
    string cat="hoyamiyaduya";
    cout << "�ʱ�ȭ�� �� 12����¥�� string������ ���̴� " << cat.length() << "�Դϴ�" << endl; //length()�� size()�� ������ ���� �� ��������� length�� ���ڿ����� size�� ���� ����ϴ� ũ��
    dog=cat; //���Կ��� ����
    cout << dog << " ȭ����" << endl;
    
    string jadong="jaya";
    string tranth;
    //tranth= cat + jadong; //�������갡��
    tranth.append(cat);
    tranth.append(jadong);
    cout << tranth << " ȭ����" << endl;

    if (tranth.find("jaya")!=string::npos)//find()�Լ��� ���ڿ� ��ã���� string::npos��� ����� ��ȯ��
        cout << "jaya�� tranth���ڿ��� ���ԵǾ��׿�!" << endl;
    else
        cout <<"jaya�� tranth���ڿ��� �����׿�.." << endl;

    
    return 0;
}