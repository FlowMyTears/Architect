#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{
    vector<double> vecDouble = {98.5,67.9,43.6,32.9};
    vecDouble.push_back(100.8);//������β���������� 
    vector<double>::iterator it;
   /* for (int i = 0; i < vecDouble.size(); i++)
    {
        cout << vecDouble[i] << endl;
    }
    
    system("pause");*/

    for ( it = vecDouble.begin(); it != vecDouble.end(); ++it)
    {
        cout << *it << endl;
    }
    
    sort(vecDouble.begin(),vecDouble.end());
    reverse(vecDouble.begin(),vecDouble.end());
    for ( it = vecDouble.begin(); it != vecDouble.end(); ++it)
    {
      cout << *it << endl;
    }
    system("pause");
    return 0;
}