#include <iostream>

using namespace std;

int main()
{
    int year;
    cout << "�������" << endl;
    cin >> year;

    int a, b;
    a = year % 100;
    b = year % 4;
    if (a != 0 && b ==0)
    {
        cout << "��һ���ƺ��Ǹ�����" << endl;
    }
    else
    {
        cout << "��һ���ƺ���������" << endl;
    }
    
    system ("pause");
    return 0;
}