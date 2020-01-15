#include <iostream>
using namespace std;
 
// 函数声明
int max(int num1, int num2);
 
int main ()
{
   // 局部变量声明
   cout << "输入俩个整数以比较大小" << endl;
   int a;
   int b;
   cin >> a;
   cin >> b;
   int ret;
 
   // 调用函数来获取最大值
   ret = max(a, b);
 
   cout << "更大的数是 : " << ret << endl;
   system ("pause");
   return 0;
}
 
// 函数返回两个数中较大的那个数
int max(int num1, int num2) 
{
   // 局部变量声明
   int result;
 
   if (num1 > num2)
      result = num1;
   else
      result = num2;
 
   return result; 
}