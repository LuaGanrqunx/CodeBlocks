/*
小寫轉大寫
專案名稱：ch02_sample_2_4_2_2
虛擬碼：
輸入一個小寫字元，印出它的大寫字元
*/
#include <iostream>

using namespace std;

int main()
{
//輸入一個小寫字元
    cout << "輸入一個小寫字元：";
    char chLower;
    cin >> chLower;
//印出它的大寫字元
//大寫字元的內碼值是小寫字元內碼值 - 32
    char chUpper = chLower - 32;
    cout << "該字元大寫為：" << chUpper << endl;
    return 0;
}
