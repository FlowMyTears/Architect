#include <iostream>
using namespace std;
int main()
{
    int a = 0;
    int b = 1;
    do
    {
        cout << "请输入一个整数" << endl;
        cin >> b;
        cout << "你当前输入的整数是" << b <<endl;
        a += 1;
    } while (a > 0 && b != 0);
    cout << "你一共输入了" << a << "个整数" << endl; 
    
	system("pause");
	return 0;
 
}