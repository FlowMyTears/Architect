#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cout << "����һ����" << endl;
    cin >> a;
    b = a % 2;
    if (b == 0)
    {
        cout << "ż��" << endl;
    }
    else
    {
        cout << "����" << endl;
    }
    
    system ("pause");
    return 0;
}