#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> numbers;
    char selection;

    do
    {
        display_menu();
        selection = get_selection();
        switch (selection)
        {
        case 'P':
        {
            handle_display(numbers);
            break;
        }
        case 'A':
        {
            handle_add(numbers);
            break;
        }
        case 'M':
        {
            handle_mean(numbers);
            break;
        }
        case 'S':
        {
            handle_smallest(numbers);
            break;
        }
        case 'L':
        {
            handle_largest(numbers);
            break;
        }
        case 'Q':
        {
            handle_quit();
            break;
        }
        default:
        {
            handle_unknown();
        }
        }
    } while (selection != 'Q');
    cout << endl;
    return 0;
}

void display_menu()
{
    cout << "\nP - Print numbers" << endl;
    cout << "A - Add a numbers" << endl;
    cout << "M - Display mean of the numbers" << endl;
    cout << "S - Display of the smallest numbers" << endl;
    cout << "L - Display of the largest numbers" << endl;
    cout << "Q - Quit" << endl;
    cout << "\nEnter your choice: ";
}

char get_selection()
{
    char selection;
    cin >> selection;
    return toupper(selection);
}

void handle_display(const vector<int> &v)
{
    if (v.size() == 0)
    {
        cout << "[] - the list is empty" << endl;
    }
    else
    {
        diaplay_list(v);
    }
}

void handle_add(vector<int> &v)
{
    int num_to_add;
    cout << "Enter an integer to add to the list: " << endl;
    cin >> num_to_add;
    v.push_back(num_to_add);
    cout << num_to_add << " added" << endl;
}

void handle_mean(const vector<int> &v)
{
    if (v.size() == 0)
    {
        cout << "Unable to calculate mean - list is empty" << endl;
    }
    else
    {
        cout << "The mean is " << calculate_mean(v) << endl;
    }
}

void handle_smallest(const vector<int> &v)
{
}

void handle_quit()
{
    cout << "Goodbye" << endl;
}

void handle_unknown()
{
    cout << "Unknown selection - try again" << endl;
}

void display_list(const vector<int> &v)
{
    cout << "[";
    for (auto num : v)
    {
        cout << num << " ";
    }
    cout << "]" << endl;
}

double calculate_mean(const vector<int> &v)
{
    int total;
    for (auto num : v)
    {
        total += num;
    }
    return static_cast<double>(total / v.size());
}