#include <iostream>
using namespace std;

int main()
{
    int num = 1;
    int sum = 0;
    while (num <= 100)
    {
       sum = sum + num;
       num++;
    }
    cout << "1��100�ĺ�Ϊ��\n" << sum << endl;
    system("pause");
    return 0;
}