#include <iostream>

using namespace std;

int main()
{
    cout << "請輸入三角形底和高（公分），以空白間隔：";
    double base = 0, height = 0;
    cin >> base >> height;
    double area = (base * height) / 2.0;

    cout << "計算結果，三角形面積為：" << area << "平方公分" << endl;

    return 0;
}
