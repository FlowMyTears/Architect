#include <iostream>
using namespace std;
int main()
{
    int a = 0;
    int b = 1;
    do
    {
        cout << "������һ������" << endl;
        cin >> b;
        cout << "�㵱ǰ�����������" << b <<endl;
        a += 1;
    } while (a > 0 && b != 0);
    cout << "��һ��������" << a << "������" << endl; 
    
	system("pause");
	return 0;
 
}