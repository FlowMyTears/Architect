#include <iostream>

using namespace std;

int main()
{
    int a[2];
    for (int i = 0; i < 2; i++)
    {
        cout << "�������" << i + 1 << "�˵�����" <<endl;
        cin >> a[i];
    }
    for (int y = 0; y < 2; y++)
    {
        for (int j = 0; j < 2 - y; j++)
        {
            if (a[j] < a[j+1])
            {
                int temp = a[j+1];
                a[j+1] = a[j];
                a[j] = temp;
            }
            
        }
        
    }
    cout << "��������������" << a[0] << "��" << endl;
    system ("pause");
    return 0;
}