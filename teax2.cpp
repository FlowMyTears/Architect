#include <iostream>

using namespace std;

int main()
{
    int r;
    const float pi = 3.1415;
    float s;
    float c;
    cout << "������뾶"  << endl;
    cin >> r;
    if (r >= 0)
    {
        s = pi * r * r;
        c = 2 * pi * r;
        cout << "Բ�����Ϊ" << s << endl;
        cout << "԰���ܳ�Ϊ" << c << endl; 
    }
    else
    {
        cout << "�뾶������С��0" << endl;
    }
    

    system ("pause");
    return 0;
}
