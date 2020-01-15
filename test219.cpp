#include <iostream>

using namespace std;
int high = 0;
int low = 999;
float sum = 0;
float average;
int people = 0;
int max(int);
int min(int);
float total(float);
int main()
{   
    int a;

    while (1)
    {
        cout << "请输入学生们的成绩" << endl;
        cin >> a;
        if (a == -1)
        {
            cout << "结束" << endl;
            break;
        }
        if (a < 0 || a > 150)
        {
            do
            {   cout << "输入的值错误，请重新输入" << endl;
                cin >> a;
                if (a >= 0 && a <= 150)
                {
                    break;
                }
                
            } while (1);
            
            
        }
        
        
        max(a);
        min(a);
        total(a);

        people++;

        cout << "当前输入了" << people << "个学生的成绩" << endl;
        cout << "其中最大值为" << high << endl;
        cout << "其中最小值为" << low << endl;
        average = sum / people;
        cout << "当前总分为" << sum << "  平均分为" << average << endl;
        

    }
    cout << "一共输入了" << people << "个学生的成绩" << endl;
    cout << "其中最大值为" << high << endl;
    cout << "其中最小值为" << low << endl;
    average = sum / people;
    cout << "当前总分为" << sum << "  平均分为" << average << endl;
        
	system("pause");
	return 0;
}
int max(int a)
{
    if (a >= high)
    {
        high = a;
    }
    
}
int min(int a)
{
    if (a <= low)
    {
        low = a;
    }
    
}
float total(float a)
{
    sum = sum + a;
}