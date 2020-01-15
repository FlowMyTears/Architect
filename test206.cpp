#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    char x;
    cout << "输入一个算式 " << endl;
    cin >> a;
    cin >> x;
    cin >> b;
    //cout << a << endl;
    //cout << x << endl;
    //cout << b << endl;
    switch (x)
    {
    case '+' :
        cout << a + b << endl;
        break;
    case '-' :
        cout << a - b << endl;
        break;
    case '*' :
        cout << a * b << endl;
        break;
    case '/' :
        cout << a / b << endl;
        break; 
    case '%' :
        cout << a % b << endl;
        break;       
    }
	system("pause");
	return 0;
 
}