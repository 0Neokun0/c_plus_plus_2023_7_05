/*
Nested Loops - Multiplication table
*/
#include <iostream>
using namespace std;

int main()
{
    for (int num1 {1}; num1 <= 10; ++num1) { //outer loop
        for (int num2 {1}; num2 <=10; ++num2) { // inner loop
            cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
        }
        cout << "-----------" << endl;
    }

    return 0;
}