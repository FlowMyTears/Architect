#include <iostream>
using namespace std;
int main()
{
	int a = 1;
	int b;
	for (a; a < 101; a++)
	{
		b = 1;
		for (int i = 2; i < a; i++)
		{
			if (a % i == 0)
			{
				b = 0;
				break;
			}
				

		}
		if (b)
		{
			cout << a << endl;
		}
		
	}
	
	system("pause");
	return 0;
 
}

 