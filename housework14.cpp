#include <iostream>

using namespace std;
int sum(int, int);
int jian(int, int);
int chen(int, int);
int chu(int, int);

int main()
{
    while (1)
    { 
    cout << "�����裬ѡһ��\n";
    cout << "1 ��\n" << endl;
    cout << "2 ��\n" << endl;
    cout << "2 ��\n" << endl;
    cout << "2 ��\n" << endl;
    int a;
    cin >> a;
    switch (a)
    {  
       
    case 1:
        int num1, num2;
        cout << "��ү���һ������" << endl;
        cin >> num1;
        cout << "��ү��ڶ�������" << endl;
        cin >> num2;
        cout << sum(num1, num2)<<endl;
        break;
    
    case 2:
        cout << "��ү���һ������" << endl;
        cin >> num1;
        cout << "��ү��ڶ�������" << endl;
        cin >> num2;
        cout << jian(num1, num2)<< endl;
        break;

     case 3:
        cout << "��ү���һ������" << endl;
        cin >> num1;
        cout << "��ү��ڶ�������" << endl;
        cin >> num2;
        cout << jian(num1, num2)<< endl;
        break;

     case 4:
        cout << "��ү���һ������" << endl;
        cin >> num1;
        cout << "��ү��ڶ�������" << endl;
        cin >> num2;
        cout << jian(num1, num2)<< endl;
        break;
    }

    system("pause");   
    }
   
    return 0;
}   

int sum(int num1, int num2)
{
    int result = num1 +num2;
    return result;
}

int jian(int num1, int num2)
{
    int result = num1 - num2;
    return result;
}

int chen(int num1, int num2)
{
    int reault = num1 * num2;
    return reault; 
}

int chu(int num1, int num2)
{
    int reault = num1 / num2;
    return reault; 
}