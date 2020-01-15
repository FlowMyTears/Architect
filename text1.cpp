#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    for (int i = 100; i < 1000; i++)
    {
        
        int a_1 = i % 10;
        int a_2 = i / 10 % 10;
        int a_3 = i /100;
        if (i ==a_1*a_1*a_1 + a_2*a_2*a_2 + a_3*a_3*a_3)
        {
            cout << i << endl;
        }
    }
    
    system ("pause");
    return 0;
}