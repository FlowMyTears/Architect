#include <iostream>
using namespace std;
int main()
{
    double a = 10000;
    for (int i = 0; i < 5; i++)
    {
        a = a * 1.003;
    }
    cout << a;
	system("pause");
	return 0;
 
}
