#include <iostream >

using namespace std;
void calcCuboid();
int main()
{
    calcCuboid();
    system("pause");
    return 0;
}
void calcCuboid()
{
    double len, width, hight;
    cout << "ÇëÊäÈë³¤¿í¸ß";
    cin >> len >> width >> hight;
    double v = len * width * hight;
    cout << v << endl;
}
