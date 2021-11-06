#include <iostream>
using namespace std;

int main()
{
    //int i=0;
    int answer;
    cout << "몇번 물어볼까?" << endl;
    cin >> answer;
    /*while (answer>i)
    {
        cout << "뭐 드시냐고 " << i+1 << "번째 물어봅니다" << endl;
        i++;
    }*/

    /*for (int a=0;a<answer;a++)
    {
        cout << "뭐 드시냐고 " << a+1 << "번째 물어봅니다" << endl;
    }
    
    cout << "배먹어 배!! 얘 겨울배가 맛있단다" << endl;*/

    /*int arr[5]={1,2,3,4,5};
    for (int a:arr)
    {
        cout << a << " ";
    }*/

    int total=0;
    /*for (int i=0;i<=answer;i++)
    {
        if (i%2==0)
            total+=i;

        else
            continue;        
    }
    cout << "1부터 " << answer << "까지 짝수의 합은 " << total << "입니다." << endl;*/

    int i=0;
    while(1)
    {
        total+=i;
        i++;
        if(i==answer+1)
            break;
    }
    cout << "1부터 " << answer << "까지 합은 " << total << "입니다." << endl;
   
    return 0;
}