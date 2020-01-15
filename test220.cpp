#include <iostream>
using namespace std;
int main()
{
    int a[5];
    for (int i = 0; i < 5; i++)
    {
        cout << "请输入第" << i + 1 <<"个整数" << endl;
        cin >> a[i];
    }
     cout << "正序:" ;
    for (int i = 0; i < 5; i++)
    {
        cout <<  a[i] <<" " ;
    }
    cout << endl;
    cout << "反序:";
    for (int i = 4; i > - 1; i--)
    {
        cout << a[i] << " ";
    }
    
	system("pause");
	return 0;

}
