/*
印出兩整數的和跟差，整數程式指定
專案名稱：ch02_sample_2_3_1
虛擬碼：
宣告兩整數id1, id2，數值請自己指定
宣告整數sum 同時計算
宣告整數diff 同時計算
印出結果：和為：多少，差為：多少
*/

#include <iostream>

using namespace std;

int main() {
//宣告兩整數id1, id2，數值自己指定
    int id1 = 10, id2 = 30;
//宣告整數sum 同時計算
    int sum = id1 + id2;
//宣告整數diff 同時計算
    int diff = id1 - id2;
//印出結果：和為：多少，差為：多少
    cout << "和為：" << sum << endl;
    cout << "差為：" << diff << endl;
    return 0;
}
