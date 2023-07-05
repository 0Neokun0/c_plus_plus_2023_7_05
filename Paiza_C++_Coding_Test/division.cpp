/*
整数 m と n が与えられます。

m を n で割り算した商と余りを出力して下さい。
*/
#include <iostream>
using namespace std;

int main()
{
    //Start from below
    int divisor, dividend, quotient, remainder;


    cin >> dividend >> divisor;



    quotient = dividend / divisor;
    remainder = dividend % divisor;

    cout << quotient << " " << remainder;


    return 0;
}