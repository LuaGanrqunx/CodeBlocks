/*
加權總分是各科成績乘上各自的時數後加總；
sumWeighted
平均則是加權總分除上總時數。
averageWeighted
寫一程式，輸入三科成績及時數後，輸出加權總分和平均
*/

#include <iostream>

using namespace std;

int main() {
    cout << "Hello world!" << endl;

//加權總分是各科成績乘上各自的時數後加總；
//sumWeighted
//平均則是加權總分除上總時數。
//averageWeighted
//輸入三科成績及時數
    cout << "請輸入三科：英文、數學、電腦的成績：";
    int scoreEng = 0, scoreMath = 0, scoreComp = 0;
    cin >> scoreEng >> scoreMath >> scoreComp;
    cout << "請輸入三科：英文、數學、電腦的時數：";
    int hourEng = 0, hourMath = 0, hourComp = 0;
    cin >> hourEng >> hourMath >> hourComp;

//計算加權總分和平均
//加權總分是各科成績乘上各自的時數後加總；
//sumWeighted
    double sumWeighted =
        scoreEng * hourEng + scoreMath * hourMath + scoreComp * hourComp;
//平均則是加權總分除上總時數。
//averageWeighted
    double aveWeighted =
        sumWeighted / (hourEng + hourMath + hourComp);

//輸出加權總分和平均
    cout << "加權總分為：" << sumWeighted << endl;
    cout << "加權平均為：" << aveWeighted << endl;



    return 0;
}
