#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    double money = 800.0;
    int year = 2015;
    while (money <= 2000)
    {    
        year++;
        money = money *1.25;
    
    }
    cout << "��" << year << "��Ӫҵ��ﵽ2000��,year" << endl;
wsadf

    /*
    string password;
    int i = 0;
    while (i < 3)
    {
    cout << "���������룺" << endl;
    cin >> password;
    cout << "���������ǣ�" << password << endl;
    system("pause");
     i++;
     if (password != "121883850")
     {
         if (i == 2)
         {
             cout << "Fuck You" << endl;
             exit(0);
         }

     }

    }

*/
   system("pause");
    return 0;
}
