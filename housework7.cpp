#include <iostream>
using namespace std;

int main()
{
    int num = 1;
    int sum = 0;
    while (num <= 100)
    {
       sum = sum + num;
       num++;
    }
    cout << "1到100的和为：\n" << sum << endl;
    system("pause");
    return 0;
}