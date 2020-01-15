#include <iostream>
using namespace std;

int main()
{
  double flower_price;
  cout << "???" << endl;
  cin >> flower_price;
  if (flower_price >= 50000)
    {
        cout << "???????" << endl;
    }
    else if (flower_price >= 500 && flower_price < 50000)
    {
        cout << "???????" << endl;
    }
    else
    {
        cout << "???????" << endl;
    }
    return 0;
}