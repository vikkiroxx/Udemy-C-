#include <bits/stdc++.h>
using namespace std;

void print(int);
void print(double);
void print(string);
void print(string, string);
void print(vector<string>);

int main()
{
    print(100);
    print('A');

    print(123.5);
    print(123.5F);

    print("C-Style string");

    string s("C++ string");
    print(s);

    print("C-style string and C++ string");

    vector<string> three_stooges{"Larry", "Moe", "Curly"};
    print(three_stooges);
    return 0;
}

void print(int num)
{
    cout << "Printing int: " << num << endl;
}

void print(double num)
{
    cout << "Printing double: " << num << endl;
}

void print(string s)
{
    cout << "Printing string: " << s << endl;
}

void print(string s, string t)
{
    cout << "Printing 2 string: " << s << " and " << t << endl;
}

void print(vector<string> v)
{
    cout << "Printing vector of strings: ";
    for (auto s : v)
    {
        cout << s + " ";
    }
    cout << endl;
}