    /*
スペース区切りで2つの単語が入力されるので順番を入れ替えてスペース区切りで出力してください。

例えば
one two
と入力された場合
two one
と出力してください。
*/
#include <iostream>
using namespace std;

int main()
{
    string a {}, b {};
    cin >> a >> b;

    cout << b << " " << a;

    return 0;
}
    