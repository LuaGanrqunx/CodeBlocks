#include <iostream>

using namespace std;

int main() {
    //宣告double 變數 半徑：radius 初始值：10.0，單位公分
    double radius = 10.0;
    // 計算周長 = 2 * 3.14 * radius
    double perimeter = 2 * 3.14 * radius;
    //印出：圓半徑為幾公分
    cout << "圓半徑為：" << radius << "公分" << endl;
    //印出：圓周長為幾公分
    cout << "圓周長為：" << perimeter << "公分" << endl;

    return 0;
}
