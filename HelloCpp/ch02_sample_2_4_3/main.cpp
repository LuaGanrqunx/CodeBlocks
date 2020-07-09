/*
範例 2.4.3
圓面積與周長
專案名稱：ch02_sample_2_4_3
虛擬碼：
輸入圓的半徑，計算並輸出該圓的面積與周長

*/
#include <iostream>

using namespace std;

int main()
{
//輸入圓的半徑
    double radius = 0;
    cout << "請輸入圓的半徑（公分）：";
    cin >> radius;
//計算並輸出該圓的面積與周長
    cout << "圓面積：" << 3.14*radius*radius << "平方公分" << endl;
    cout << "圓周長：" << 2*3.14*radius << "公分" << endl;
    return 0;
}
