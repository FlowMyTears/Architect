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
        cout << "�����������㣿" << endl << "1.�� 2.�� 3.�� 4.�� \n      5.�˳�" << endl;
        cin >> choice;
    switch (choice)
    {
        case 1:
        cout << "��������������" << endl;
        cin >> a_1;
        cin >> a_2;
        cout << "���Ϊ:" << jia(a_1, a_2) << endl;
        break;
        case 2:
        cout << "��������������" << endl;
        cin >> a_1;
        cin >> a_2;
        cout << "���Ϊ:" << jian(a_1, a_2) << endl;
        break;
        case 3:
        cout << "��������������" << endl;
        cin >> a_1;
        cin >> a_2;
        cout << "���Ϊ:" << cheng(a_1, a_2) << endl;
        break;    
        case 4:
        cout << "��������������" << endl;
        cin >> a_1;
        cin >> a_2;
        cout << "���Ϊ:" << chu(a_1, a_2) << endl;
        break;
        case 5:
        x = 0;
        cout << "��лʹ��" << endl;
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