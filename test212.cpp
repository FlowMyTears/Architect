#include <iostream>
using namespace std;
int main()
{
    int a = 0;
    int b = 0;
    do
    {
        b = a * 9 / 5.0 + 32;
        cout << "���϶�Ϊ" << a << "ʱ���϶�Ϊ" << b << endl;
        a += 25;
    } while (a <= 250);
    
	system("pause");
	return 0;
 
}
