#include <iostream>

using namespace std;

int main()
{
    float score;
    while (1)
    {
    cout << "��������ĳɼ�" << endl;
    cin >> score;
    if (score >= 90)
    {
        cout << "����A" << endl;
    }
    if (score >= 80 && score < 90)
    {
        cout << "����B" << endl;
    }
    if (score >= 70 && score < 80)
    {
        cout << "����C" << endl;
    }
    if (score >= 60 && score < 70)
    {
        cout << "����D" << endl;
    }
    if (score < 60)
    {
        cout << "����E" << endl;
    }                
    }
    
    
    system ("pause");
    return 0;
}
