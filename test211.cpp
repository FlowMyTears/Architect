#include <iostream>
using namespace std;
int main()
{
    int a =0;
    int b = 0;
    do
    {
        cout << "请输入十个整数" << endl;
        cin >> b;
        a += 1;
    } while (a < 10 && b != 100);
    cout << "结束" << endl;
	system("pause");
	return 0;
 
}