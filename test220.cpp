#include <iostream>
using namespace std;
int main()
{
    int a[5];
    for (int i = 0; i < 5; i++)
    {
        cout << "�������" << i + 1 <<"������" << endl;
        cin >> a[i];
    }
     cout << "����:" ;
    for (int i = 0; i < 5; i++)
    {
        cout <<  a[i] <<" " ;
    }
    cout << endl;
    cout << "����:";
    for (int i = 4; i > - 1; i--)
    {
        cout << a[i] << " ";
    }
    
	system("pause");
	return 0;

}
