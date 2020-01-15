#include <iostream>
#include <cmath>
#include <iomanip>
#include <windows.h>
using namespace std;

int main()
{
    cout << fixed << setprecision(2);
    cout << "名称：" << "德玛西亚之力-盖伦" << endl;
    double num_Attack = 57.88, num_AttackDistance = 172;
    cout << "伤害：" << num_Attack << "(+4.50)"<< setw(16) << "攻击距离" << num_AttackDistance << endl;
    double  num_Armor = 27.54, num_MagicResistance = 32.10;
    cout << "护甲" << num_Armor << "(+3.00)"<< setw(12) << "魔抗" << num_MagicResistance << "(+1.25)" << endl;
    double num_LifeValue = 616.28, num_LifeRecovery = 7.84;
    cout << "生命" << num_LifeValue << "(+84.25)"<< setw(16) << "生命恢复" << num_LifeRecovery << "(+0.50)" << endl;
    int num_Speed = 340;
    cout << "移速" << num_Speed << setw(16) << "\t\t\t  定位：上单 辅助 打野" << endl;
    return 0;

}