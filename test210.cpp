#include <iostream>
using namespace std;
int main()
{
    int a = 12;
    int b = 2014;
    do
    {
        a=a*1.25;
        b += 1;
   
    } while (a <= 30);
     cout << b << endl;
	system("pause");
	return 0;
 
}