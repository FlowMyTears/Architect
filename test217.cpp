#include <iostream>
using namespace std;
int jia(int, int);
int jian(int, int);
int cheng(int, int);
int chu(int, int);
int main()
{
    int choice;
    int a_1;
    int a_2;
    int x =1;
    while (x)
    {
        cout << "想作哪种运算？" << endl << "1.加 2.减 3.乘 4.除 \n      5.退出" << endl;
        cin >> choice;
    switch (choice)
    {
        case 1:
        cout << "请输入俩个整数" << endl;
        cin >> a_1;
        cin >> a_2;
        cout << "结果为:" << jia(a_1, a_2) << endl;
        break;
        case 2:
        cout << "请输入俩个整数" << endl;
        cin >> a_1;
        cin >> a_2;
        cout << "结果为:" << jian(a_1, a_2) << endl;
        break;
        case 3:
        cout << "请输入俩个整数" << endl;
        cin >> a_1;
        cin >> a_2;
        cout << "结果为:" << cheng(a_1, a_2) << endl;
        break;    
        case 4:
        cout << "请输入俩个整数" << endl;
        cin >> a_1;
        cin >> a_2;
        cout << "结果为:" << chu(a_1, a_2) << endl;
        break;
        case 5:
        x = 0;
        cout << "感谢使用" << endl;
        break;            
    }
    }
    
    

	system("pause");
	return 0;
}

int jia(int a, int b)
{
    int c = a + b;
    return c;
}
int jian(int a, int b)
{
    int c = a - b;
    return c;
}
int cheng(int a, int b)
{
    int c = a * b;
    return c;
}
int chu(int a, int b)
{
    int c = a / b;
    return c;
}