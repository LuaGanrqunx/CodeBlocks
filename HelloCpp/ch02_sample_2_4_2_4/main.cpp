/*
範例 2.4.2-4
定位輸出
專案名稱：ch02_sample_2_4_2_4
虛擬碼：
輸入國文、英文、數學三科成績，使用定位點，將各科名稱與成績分行排列

*/
#include <iostream>

using namespace std;

int main()
{
//輸入國文、英文、數學三科成績
    int scoreChinese =0, scoreEnglish =0, scoreMath = 0;
    cout << "請輸入國文、英文、數學三科成績，以空白分隔：";
    cin >> scoreChinese >> scoreEnglish >> scoreMath;
//使用定位點，將各科名稱與成績分行排列
    cout << "國文\t" << "英文\t" << "數學" << endl;
    cout << scoreChinese << "\t" << scoreEnglish << "\t" << scoreMath << endl;
    return 0;
}
