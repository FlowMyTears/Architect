#include <iostream>
using namespace std;

int main()
{
    int nums[] {8,4,2,1,26,845,1100};
    int numsLen = sizeof(nums) / sizeof(int);
    int min =nums[0];
    int minIndex = 0;
    int temp;
    

    for (int i = 0; i < numsLen - 1 ; i++)
    {
       min = nums[i];
       minIndex = i;
       for (int j  = i+1; j < numsLen - 1; j++)
       {
           if (nums[j] < min)
           {
            min = nums[j];
            minIndex = j;           
           }
       }
       if (minIndex > i)
       {
           temp = nums[minIndex];
           nums[minIndex] = nums[i];
           nums[i] =temp;
       }
       

    }
    for (int i = 0; i < numsLen; i++)
    {
        /* code */cout << nums[i] << endl;
    }
    system("pause");
    return 0;        
}