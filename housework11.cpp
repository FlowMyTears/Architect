#include <iostream>
using namespace std;

int main()
{
    int day = 31;
    int dayOfWeek =2;
    cout << "1997��7�µ��������£�" <<endl;
    cout << "һ\t ��\t��\t��\t��\t��\t��" << endl;
    for (int i = 0; i < dayOfWeek - 1; i++)
    {
       cout << '\t';
    }
    for (int i = 1; i <= day; i++)
    {
        cout << i;
        if ((i - 1 + dayOfWeek) % 7 == 0)
        {
            cout << '\n';
        }
        else
        {
            cout << '\t';
        }
        
    }
    cout << endl;
   
    system ("pause");
    return 0;
}