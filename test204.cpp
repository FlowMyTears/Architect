#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "输入一个数" << endl;
    cin >> a;
    if (a >= 100 && a <= 999)
    {
        cout << "是" << endl;
    }
    else
    {
        cout << "否" << endl;
    }
    
	system("pause");
	return 0;
 
}
