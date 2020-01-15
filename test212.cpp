#include <iostream>
using namespace std;
int main()
{
    int a = 0;
    int b = 0;
    do
    {
        b = a * 9 / 5.0 + 32;
        cout << "摄氏度为" << a << "时华氏度为" << b << endl;
        a += 25;
    } while (a <= 250);
    
	system("pause");
	return 0;
 
}
