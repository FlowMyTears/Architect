#include <iostream>
using namespace std;

int main()
{
    string stu_names[] = {"小绵羊","银老板","小火龙"};
    string course_namws[] = {"真银斩","火山","串串烧"};
    const int ROW = 3;
    const int COl = 3;
    double scores[ROW][COl];
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COl; j++)
        {
            cout << stu_names[i] << "的" << course_namws[j] << "成绩:";
            cin >> scores[i][j];
        }
            /* code */
    }
    cout << "\t";
    for (int i = 0; i < COl; i++)
    {
        cout << course_namws[i] << "\t";
    }
    for (int i = 0; i < ROW; i++)
    {      
        
        cout << endl;
        cout << stu_names[i] << "\t";
  
        for (int j = 0; j < COl; j++)
        {
            cout << scores[i][j] << "\t";
        }
        cout << endl;
        
    }
    
    system("pause");
    return 0;
}