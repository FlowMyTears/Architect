#include <iostream>
using namespace std;
int main()
{
    int a;
    bool b = true;
    cout << "����һ��������" << endl;
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
        cout << "��һ������" << endl;
    }
    else
    {
        cout << "����һ������" << endl;
    }
    
    
	system("pause");
	return 0;
 
}
