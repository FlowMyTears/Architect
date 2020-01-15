#include <iostream>
using namespace std;
int main()
{
    int c[20];
    c[0] = 1;
    c[1] = 1;
    for (int i = 2; i < 20; i++)
    {
        c[i] = c[i - 1] + c[i - 2];
    }
    for (int j = 0; j < 20; j++)
    {
        cout << c[j] << " ";
        if (c[j] % 5 == 0)
        {
            cout << "\n";
        }
        
    }
    
	system("pause");
	return 0;
 
}
