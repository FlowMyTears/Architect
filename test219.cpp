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
        cout << "������ѧ���ǵĳɼ�" << endl;
        cin >> a;
        if (a == -1)
        {
            cout << "����" << endl;
            break;
        }
        if (a < 0 || a > 150)
        {
            do
            {   cout << "�����ֵ��������������" << endl;
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

        cout << "��ǰ������" << people << "��ѧ���ĳɼ�" << endl;
        cout << "�������ֵΪ" << high << endl;
        cout << "������СֵΪ" << low << endl;
        average = sum / people;
        cout << "��ǰ�ܷ�Ϊ" << sum << "  ƽ����Ϊ" << average << endl;
        

    }
    cout << "һ��������" << people << "��ѧ���ĳɼ�" << endl;
    cout << "�������ֵΪ" << high << endl;
    cout << "������СֵΪ" << low << endl;
    average = sum / people;
    cout << "��ǰ�ܷ�Ϊ" << sum << "  ƽ����Ϊ" << average << endl;
        
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