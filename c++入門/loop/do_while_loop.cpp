/*
 do {
    statements;
 }  while (ecpression);
*/
#include <iostream>
using namespace std;

int main()
{
    char selection {};
    do {
        cout << "\n-----------------------------" << endl;
        cout << "1.Do this" << endl;
        cout << "2.Do that" << endl;
        cout << "3.Do something else" << endl;
        cout << "!.Quit" << endl;
        cout << "\n Enter your selection: ";
        
        cin >> selection;

        if(selection == '1')
            cout << "You chose 1 -Doing this" << endl;
        else if (selection == '2')
            cout << "You chose 2 - Doing that" << endl;
        else if (selection == '3')
            cout << "You chose 3 - Doing something else" << endl;
        else if (selection == 'Q' || selection == 'q')
            cout << "Goodbye..." << endl;
        else
            cout << "Unknown option -- Try Again..." << endl;

    }   while ( selection != 'q' && selection != 'Q');

    return 0;
}