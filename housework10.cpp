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
        cout << "您的第" << i + 1 <<"个月工资为:" << endl;
        cin >> salary;
        salarySum += salary;
    }
    avgslary =salarySum / YEAR;
    cout << "平均工资为：" << avgslary << endl;
    cout
    
    system ("pause");
    return 0;
}