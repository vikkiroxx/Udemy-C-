#include <bits/stdc++.h>
using namespace std;

unsigned long long factorial(unsigned long long n)
{
    if (n == 0)
    {
        return 1;
    }
    return n * factorial(n - 1);
}

int main()
{
    cout << factorial(8) << endl;
    return 0;
}