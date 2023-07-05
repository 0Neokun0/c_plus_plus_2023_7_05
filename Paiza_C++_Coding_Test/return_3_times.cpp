/*
バレンタインデーも終わり、あなたはホワイトデーにいくつチョコレートを用意すればよいかを計算するプログラムを作ることにしました。

もらったチョコレートが 1 つ以上であればその 3 倍の数を、 0 個であれば自分用に 1 つだけ用意することにします......。

例)
もらったチョコレート: 2 個
→ 用意するチョコレート: 2 x 3 = 6 個
もらったチョコレート: 0 個
→ 用意するチョコレート: 1 個
*/
#include <iostream>
using namespace std;

int main()
{
    //Start from below
    int input{};
    cin >> input;
    if ( input == 0) {
        cout << "1";
    }
    else {
        cout << input * 3;
    }
    return 0;
}