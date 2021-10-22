#include <bits/stdc++.h>
using namespace std;
int main()
{
    int score{};
    cout << "Enter your score on the exam(0-100): ";
    cin >> score;
    char grade{};

    if (score >= 0 && score <= 100)
    {
        if (score >= 90)
        {
            grade = 'A';
        }
        else if (score >= 80)
        {
            grade = 'B';
        }
        else if (score >= 70)
        {
            grade = 'C';
        }
        else if (score >= 60)
        {
            grade = 'D';
        }
        else
        {
            grade = 'F';
        }

        cout << "Your Grade is: " << grade << endl;
        if (grade == 'F')
        {
            cout << "Sorry, you must repeat the class" << endl;
        }
        else
        {
            cout << "Congrats!!" << endl;
        }
    }
    else
    {
        cout << "Sorry " << score << " is not in range" << endl;
    }
    return 0;
}