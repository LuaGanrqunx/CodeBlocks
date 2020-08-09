/*
寫一程式，能輸入兩整數，將兩數交換後輸出
輸出：請輸入兩個整數
輸出：未交換前，整數1為：{值}，整數2為：{值}
先把整數1的值備份起來
讓整數1等於整數2
再讓整數2等於整數的原始值
輸出：經交換後，整數1為：{值}，整數2為：{值}
*/
#include <iostream>

using namespace std;

int main() {
//輸出：請輸入兩個整數
    cout << "請輸入兩個整數：";
    int id1 =0, id2 = 0;
    cin >> id1 >> id2;
//輸出：未交換前，整數1為：{值}，整數2為：{值}
    cout << "未交換前，\t整數1為：" << id1 << "，整數2為：" << id2 << endl;
//先把整數1的值備份起來
    int id1BackUp = id1;
//讓整數1等於整數2
    id1 = id2;
//再讓整數2等於整數的原始值
    id2 = id1BackUp;
//輸出：經交換後，整數1為：{值}，整數2為：{值}
    cout << "交換後，\t整數1為：" << id1 << "，整數2為：" << id2 << endl;
    return 0;
}
