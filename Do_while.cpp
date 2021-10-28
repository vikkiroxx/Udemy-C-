#include <bits/stdc++.h>
using namespace std;
int main()
{
    char selection{};
    do
    {
        cout << "_____________________" << endl;
        cout << "1.Do this" << endl;
        cout << "2.Do that" << endl;
        cout << "3.Do something else" << endl;
        cout << "Q.Quit" << endl;
        cout << "Enter your Selection: ";
        cin >> selection;

        if (selection == '1')
        {
            cout << "\nYou chose 1 - doing this" << endl;
        }
        else if (selection == '2')
        {
            cout << "\nYou chose 2 - doing that" << endl;
        }
        else if (selection == '3')
        {
            cout << "\nYou chose 3 - doing something else" << endl;
        }
        else if (selection == 'q' || selection == 'Q')
        {
            cout << "\nGoodbye..." << endl;
        }
        else
        {
            cout << "\nUnknown Option..... Try Again" << endl;
        }
    } while (selection != 'q' && selection != 'Q');
    return 0;
}