#include <iostream>
using namespace std;
 
// ��������
int max(int num1, int num2);
 
int main ()
{
   // �ֲ���������
   cout << "�������������ԱȽϴ�С" << endl;
   int a;
   int b;
   cin >> a;
   cin >> b;
   int ret;
 
   // ���ú�������ȡ���ֵ
   ret = max(a, b);
 
   cout << "��������� : " << ret << endl;
   system ("pause");
   return 0;
}
 
// ���������������нϴ���Ǹ���
int max(int num1, int num2) 
{
   // �ֲ���������
   int result;
 
   if (num1 > num2)
      result = num1;
   else
      result = num2;
 
   return result; 
}