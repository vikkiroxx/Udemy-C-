#include <bits/stdc++.h>
using namespace std;
int main()
{
    // int n{};
    // cout << "Enter a positive integer for countdown : ";
    // cin >> n;

    // while (n > 0)
    // {
    //     cout << n << endl;
    //     --n;
    // }
    // cout << "Blastoff!!!" << endl;

    // int n{};
    // cout << "Enter a positive integer : ";
    // cin >> n;

    // int i{1};
    // while (n >= i)
    // {
    //     cout << i << endl;
    //     i++;
    // }

    // int n{};
    // cout << "Enter a positive integer less than 100 : ";
    // cin >> n;

    // while (n >= 100)
    // {
    //     cout << "Enter an integer less than 100: ";
    //     cin >> n;
    // }
    // cout << "Thanx" << endl;

    bool done{false};
    int n{0};

    while (!done)
    {
        cout << "Enter the integer between 1 and 5: ";
        cin >> n;

        if (n <= 1 || n >= 5)
        {
            cout << "Out of range, try again" << endl;
        }
        else
        {
            cout << "Thanx!" << endl;
            done = true;
        }
    }

    return 0;
}