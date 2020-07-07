/*
範例 2.4.3-2
溫度單位的換算
專案名稱：ch02_sample_2_4_3_2
虛擬碼：
公式：Celsius = (Fahrenheit - 32 ) * 5 / 9
輸入華氏度數，輸出攝氏度數，結果小數點以下三位五捨五入

*/
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
//公式：Celsius = (Fahrenheit - 32 ) * 5 / 9
//輸入華氏度數
    double fahrenheit = 0;
    cout << "請輸入華氏度數：";
    cin >> fahrenheit;
//輸出攝氏度數，結果小數點以下三位五捨五入
    double celsius = (fahrenheit - 32) * 5 / 9;
    cout << "攝氏度數：" << fixed << setprecision(3) << celsius << "度" << endl;
    return 0;
}
