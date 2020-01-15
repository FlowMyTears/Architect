#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cout << "输入一个数" << endl;
    cin >> a;
    b = a % 2;
    if (b == 0)
    {
        cout << "偶数" << endl;
    }
    else
    {
        cout << "奇数" << endl;
    }
    
    system ("pause");
    return 0;
}