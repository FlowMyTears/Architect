#include <iostream>
using namespace std;
int main()
{
    int a;
    bool b = true;
    cout << "输入一个正整数" << endl;
    cin >> a;
    for (int i = 2; i < a; i++)
    {
        if (a % i == 0)
        {
            b = false;
            break;
        }
        
    }

    if (b)
    {
        cout << "是一个质数" << endl;
    }
    else
    {
        cout << "不是一个质数" << endl;
    }
    
    
	system("pause");
	return 0;
 
}
