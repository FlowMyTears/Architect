#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;
    cout << "请输入一个数" << endl;
    cin >> a;
    if (a > 0)
    {
        cout << a * 2 - 1 << endl;
    }
    if (a == 0)
    {
        cout << 0 << endl;
    }
    if (a < 0)
    {
        cout << a * 2 + 1 << endl;
    }
    system ("pause");
    return 0;
}
