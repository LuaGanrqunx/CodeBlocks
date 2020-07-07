/*
印出兩整數的和跟差，整數改由使用者輸入
專案名稱：ch02_sample_2_3_2
虛擬碼：
宣告兩整數id1, id2，數值都為0
提示使用者輸入兩個整數
接收兩個整數
宣告整數sum 同時計算和
宣告整數diff 同時計算差
印出結果：和為：多少，差為：多少
*/

#include <iostream>

using namespace std;

int main() {
//宣告兩整數id1, id2，數值都為0
    int id1 = 0, id2 = 0;
//提示使用者輸入兩個整數
    cout << "請輸入兩個整數：";
//    接收兩個整數
    cin >> id1 >> id2;
//宣告整數sum 同時計算
    int sum = id1 + id2;
//宣告整數diff 同時計算
    int diff = id1 - id2;
//印出結果：和為：多少，差為：多少
    cout << "和為：" << sum << endl;
    cout << "差為：" << diff << endl;
    return 0;
}
