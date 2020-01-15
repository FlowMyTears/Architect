#include <iostream>
using namespace std;

int main()
{
    int choice = 1;
    cout << "Ñ¡ÔñÄãÂèµÄÏÂ³¡" << endl;
    cin >> choice;
    switch(choice)
    {
        case 1:
        cout << "²ÙÄãÂè" << endl;
        break;
        case 2:
        cout << "µõÄãÂè" << endl;
        break;
        case 3:
        cout << "ÄãÂèËÀÁË" << endl;
        break;
        case 4:
        cout << "ÄãÂèÕ¨ÁË" << endl;
        break;
    }
    system("pause");
    return 0;
}