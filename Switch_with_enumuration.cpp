#include <bits/stdc++.h>
using namespace std;
int main()
{
    enum direction
    {
        left,
        right,
        up,
        down
    };

    direction heading{left};

    switch (heading)
    {
    case left:
        cout << "Going left" << endl;
        break;

    case right:
        cout << "Going right" << endl;
        break;

    default:
        cout << "OK" << endl;
        break;
    }
    return 0;
}