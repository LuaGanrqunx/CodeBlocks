/*
了解變數未起始化的問題
宣告整數 id1，不要初始化
印出id1的內容： ex id1 = {id1 value}
*/
#include <iostream>

using namespace std;

int main() {
//宣告整數 id1，不要初始化
    int id1;

//印出id1的內容： ex id1 = {id1 value}
    cout << "id1 = " << id1 << endl;
    return 0;
}
