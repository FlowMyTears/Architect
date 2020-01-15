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
    cout << "操你妈，选一个\n";
    cout << "1 加\n" << endl;
    cout << "2 减\n" << endl;
    cout << "2 乘\n" << endl;
    cout << "2 除\n" << endl;
    int a;
    cin >> a;
    switch (a)
    {  
       
    case 1:
        int num1, num2;
        cout << "给爷输第一个数字" << endl;
        cin >> num1;
        cout << "给爷输第二个数字" << endl;
        cin >> num2;
        cout << sum(num1, num2)<<endl;
        break;
    
    case 2:
        cout << "给爷输第一个数字" << endl;
        cin >> num1;
        cout << "给爷输第二个数字" << endl;
        cin >> num2;
        cout << jian(num1, num2)<< endl;
        break;

     case 3:
        cout << "给爷输第一个数字" << endl;
        cin >> num1;
        cout << "给爷输第二个数字" << endl;
        cin >> num2;
        cout << jian(num1, num2)<< endl;
        break;

     case 4:
        cout << "给爷输第一个数字" << endl;
        cin >> num1;
        cout << "给爷输第二个数字" << endl;
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