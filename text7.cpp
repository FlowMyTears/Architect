#include <iostream>

using namespace std;

int main()
{
    int year, month, day;
    int num;
    cout << "������____���" << endl;
    cin >> year;
    cout << "__��" << endl;
    cin >> month;
    cout << "__��" << endl;
    cin >> day;
    switch (month)
    {
    case 1:
        num = day;
        break;
    case 2:
        num = day + 31;
        break;
    case 3:
        num = day + 59;
        break;
    case 4:
        num = day + 90;
        break;
    case 5:
        num = day + 120;
        break;
    case 6:
        num = day + 151;
        break;
    case 7:
        num = day + 182;
        break;
    case 8:
        num = day + 212;
        break;
    case 9:
        num = day + 243;
        break;
    case 10:
        num = day + 273;
        break;
    case 11:
        num = day + 304;
        break;
    case 12:
        num = day + 334;
        break;
                                            
    default:
        cout << "�������" << endl;
        break;
    }
    int a, b;
    a = year % 100;
    b = year % 4;
    if (a != 0 && b ==0 && month >= 3)
    {
        num += 1;
    }
    if (a != 0 && b ==0)
    {
        cout << "��һ���ƺ��Ǹ�����" << endl;
    }
        
    cout << year << "��" << month << "��" << day << "������һ��ĵ�" << num << "��" << endl;
    system ("pause");
    return 0;
}
