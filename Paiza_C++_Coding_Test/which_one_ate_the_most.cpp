/*
あるラーメン屋があります、A 君は X グラム B 君は Y グラム食べました。多く食べたほうの食べた量を出力してください。

入力例 1 の場合
180
150
A 君は 180 グラム、B 君は 150 グラム食べているので、180 > 150 より 180 を出力します。
180
と出力してください。
*/
#include <iostream>
using namespace std;

int main()
{
    //Start from below
    int quantity1{}, quantity2{};
    cin >> quantity1;
    cin >> quantity2;
    if(quantity1 > quantity2) {
        cout << quantity1;
    } else {
        cout << quantity2;
    }
    return 0;
}