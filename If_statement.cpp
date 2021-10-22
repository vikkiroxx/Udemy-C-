#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n{};
    const int min{10};
    const int max{100};

    cout << "Enter a number between " << min << " and " << max << ": ";
    cin >> n;

    if (n >= min)
    {
        cout << "\n==========if statement 1============" << endl;
        cout << n << " is greater than or equal to " << min << endl;

        int diff(n - min);
        cout << n << " is " << diff << " greater than " << min << endl;
    }

    if (n <= max)
    {
        cout << "\n==========if statement 2============" << endl;
        cout << n << " is less than or equal to  " << max << endl;

        int diff(max - n);
        cout << n << " is " << diff << " less than " << max << endl;
    }

    if (n >= min && n <= max)
    {
        cout << "\n==========if statement 3============" << endl;
        cout << n << " is in range " << endl;
    }

    if (n == min || n == max)
    {
        cout << "\n==========if statement 4============" << endl;
        cout << n << " is right on the boundary " << endl;
    }
    return 0;
}