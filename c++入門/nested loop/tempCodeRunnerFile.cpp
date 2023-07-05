/*
- clearing out the lest (make it empty again) ( HInt : the vector class has a .clear() method)
- don't allow duplicate entries
- come up with your own ideas!
*/
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> numbers{};
    char selection{};

    do
    {
        // Diplay menu
        cout << "\nP - Print numbers" << endl;
        cout << "A - Add a number" << endl;
        cout << "M - Display mean of the numbers" << endl;
        cout << "S - Display the smallest number" << endl;
        cout << "L - Display the largest number" << endl;
        cout << "! - Quit" << endl;
        cout << "\nEnter your choice: " << endl;
        cin >> selection;

        if (selection == 'P' || selection == 'p')
        {
            if (numbers.size() == 0)
                cout << "[] - the list is empty" << endl;
            else
            {
                cout << "[ ";
                for (auto num : numbers)
                    cout << num << " ";
                cout << "]" << endl;
            }
        }
        else if (selection == 'a' || selection == 'A')
        {
            int num_to_add{};
            cout << "Enter an integer to add to the list: ";
            cin >> num_to_add;
            numbers.push_back(num_to_add);
            cout << num_to_add << " added\n"
                 << endl;
        }
        else if (selection == 'M' || selection == 'm')
        {
            if (numbers.size() == 0)
                cout << "Unable to calculate mean - no data " << endl;
            else
            {
                int total{};
                for (auto num : numbers)
                    total += num;
                cout << "The mean is : " << static_cast<double>(total) / numbers.size() << endl;
            }
        }
        else if (selection == 's' || selection == 'S')
        {
            if (numbers.size() == 0)
                cout << "Unable to determine the smallest - list is empty" << endl;

            else
            {
                int smallest = numbers.at(0);
                for (auto num : numbers)
                    if (num < smallest)
                        smallest = num;
                cout << "The smallest numbers is : " << smallest << endl;
            }
        }
        else if (selection == 'L' || selection == 'l')
        {
            if (numbers.size() == 0)
                cout << "Unable to determine largest - list is empty" << endl;
            else
            {
                int largest = numbers.at(0);
                for (auto num : numbers)
                    if (num > largest)
                        largest = num;
                cout << "The largest number is : " << largest << endl;
            }
        }
        else if (selection == 'Q' || selection == 'q')
        {
            cout << "GoodBye" << endl;
        }
        else
        {
            cout << "Unknown selection, please try again" << endl;
        }

    } while (selection != 'q' && selection != 'Q');

    cout << endl;
    return 0;
}