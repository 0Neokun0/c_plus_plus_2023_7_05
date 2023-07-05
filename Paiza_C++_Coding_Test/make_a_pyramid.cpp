/*
ピラミッドの段数: 5 段
1 + 2 + 3 + 4 + 5 = 15
→ 必要な人数: 15 人
*/
#include <iostream>
using namespace std;

int main()
{
    //Start from below
    int input{}, sum{0};
    cin >> input;
    while (input > 0)
    {
        sum += input;
        input--;
    }
    cout << sum;


    return 0;
}