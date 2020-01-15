#include <iostream>

using namespace std;

int main()
{
    float score;
    while (1)
    {
    cout << "请输入你的成绩" << endl;
    cin >> score;
    if (score >= 90)
    {
        cout << "评级A" << endl;
    }
    if (score >= 80 && score < 90)
    {
        cout << "评级B" << endl;
    }
    if (score >= 70 && score < 80)
    {
        cout << "评级C" << endl;
    }
    if (score >= 60 && score < 70)
    {
        cout << "评级D" << endl;
    }
    if (score < 60)
    {
        cout << "评级E" << endl;
    }                
    }
    
    
    system ("pause");
    return 0;
}
