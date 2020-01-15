#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double attack1 = 272;
    double attack2 = 250;
    double attack3 = 240;
    cout << left;
    cout << setfill('*');
    cout << setw(8) << attack1 <<
            setw(8) << attack2 <<
            setw(8) << attack3 << endl;
            
    return 0;
}