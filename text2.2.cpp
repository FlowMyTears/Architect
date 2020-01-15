#include <iostream>

using namespace std;

int main()
{
    int year;
    cout << "输入年份" << endl;
    cin >> year;

    int a, b;
    a = year % 100;
    b = year % 4;
    if (a != 0 && b ==0)
    {
        cout << "这一年似乎是个闰年" << endl;
    }
    else
    {
        cout << "这一年似乎不是闰年" << endl;
    }
    
    system ("pause");
    return 0;
}