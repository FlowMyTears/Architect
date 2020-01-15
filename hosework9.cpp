#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
    int hp1 =100;
    int hp2 =100;

    int randNum;
    
    int attack1 = 0;
    int attack2 = 0;

    //³öÕÐË³Ðò
    srand(time(NULL));   
    while (hp1 > 0 && hp2 > 0)
    {
        randNum = rand();
    if (randNum % 2 ==1)
    {
        attack1 = (int)(5 + 10 * rand() / (RAND_MAX + 1.0));
        attack2 = (int)(5 + 10 * rand() / (RAND_MAX + 1.0));
        hp1 -= attack2;
        hp2 -= attack1;
    }
    else
        { 
            attack1 = (int)(5 + 10 * rand() / (RAND_MAX + 1.0));
            attack2 = (int)(5 + 10 * rand() / (RAND_MAX + 1.0));
            hp1 -= attack2;
            hp2 -= attack1;
        }
    }
    cout << hp1 << endl;
    cout << hp2 << endl;
    system("pause");
    return 0;  
}