#include <iostream>
using namespace std;
int main()
{
    int a =0;
    int b = 0;
    do
    {
        cout << "������ʮ������" << endl;
        cin >> b;
        a += 1;
    } while (a < 10 && b != 100);
    cout << "����" << endl;
	system("pause");
	return 0;
 
}