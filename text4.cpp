#include <iostream>

using namespace std;

int main()
{
    int a[6];
    for (int i = 0; i < 6; i++)
    {
        cout << "请输入第" << i + 1 << "个数字" <<endl;
        cin >> a[i];
    }
    for (int y = 0; y < 6; y++)
    {
        for (int j = 0; j < 6 - y; j++)
        {
            if (a[j] > a[j+1])
            {
                int temp = a[j+1];
                a[j+1] = a[j];
                a[j] = temp;
            }
            
        }
        
    }
    cout << "其中最小的数字是" << a[0] << endl;
    system ("pause");
    return 0;
}
