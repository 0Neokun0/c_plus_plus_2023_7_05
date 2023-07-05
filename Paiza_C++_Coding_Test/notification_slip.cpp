/*
paiza 中学校ではこれまで 5 ~ 1 の数字で成績をつけていましたが、英語教育に力を入れるため今年度から A ~ E のアルファベットで成績をつけることにしました。
すでに成績を数字でつけてしまったあなたはあわててアルファベットに変換することにしました。

例)
変換前 -> 変換後
5 -> A
3 -> C
2 -> D
4 -> B
1 -> E

*/
#include <iostream>
using namespace std;

int main()
{
    //Start from below
    int n{};
    cin >> n;
    switch (n)
    {
    case 1:
        cout << "E";
        break;
    case 2:
        cout << "D";
        break;
    case 3:
        cout << "C";
        break;
    case 4:
        cout << "B";
        break;
    case 5:
        cout << "A";
        break;
    
    default:
        break;
    }
    return 0;
}