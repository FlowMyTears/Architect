#include <iostream>

using namespace std;

int main()
{
    int r;
    const float pi = 3.1415;
    float s;
    float c;
    cout << "请输入半径"  << endl;
    cin >> r;
    if (r >= 0)
    {
        s = pi * r * r;
        c = 2 * pi * r;
        cout << "圆的面积为" << s << endl;
        cout << "园的周长为" << c << endl; 
    }
    else
    {
        cout << "半径不可以小于0" << endl;
    }
    

    system ("pause");
    return 0;
}
