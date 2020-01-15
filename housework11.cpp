#include <iostream>
using namespace std;

int main()
{
    int day = 31;
    int dayOfWeek =2;
    cout << "1997年7月的日历如下：" <<endl;
    cout << "一\t 二\t三\t四\t五\t六\t日" << endl;
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