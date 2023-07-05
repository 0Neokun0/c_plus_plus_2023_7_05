/*
 continue
    - no further statement 
    - control immediately 
 break
    - no further statement
    - loop is immediately terminated
    - control immediately goes to the statement
*/
#include <iostream>
using namespace std;

int main()
{
  for (int i = 0; i < 10; i++) {
    if (i == 4) // skip 4
    {
      continue;
    }
    cout << i << "\n";
  }   
  return 0;
}
