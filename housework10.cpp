#include <iostream>
using namespace std;

int main()
{
    double salary = 0;
    double avgslary =0;
    double salarySum = 0;
    const int YEAR = 6;
    for ( int i = 0; i < YEAR; i++)
    {
        cout << "���ĵ�" << i + 1 <<"���¹���Ϊ:" << endl;
        cin >> salary;
        salarySum += salary;
    }
    avgslary =salarySum / YEAR;
    cout << "ƽ������Ϊ��" << avgslary << endl;
    cout
    
    system ("pause");
    return 0;
}