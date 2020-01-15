#include <iostream>
using namespace std;

int main ()
{
   int nums[]{8, 4, 2, 1, 23, 344, 12};
   int numslen = sizeof(nums) / sizeof(int);
   int sum = 0;
   for (int i=0 ;  i < numslen; i++)
   {
    cout << nums[i] << '\t';
   }
   cout << endl;
   for (int i = 0; i < numslen; i++)
   {
       sum = sum + nums[i];
   }
   cout << "数列的和为；" << sum << "\t平均值为：" << sum / numslen;
   system ("pause");

    return 0;
}