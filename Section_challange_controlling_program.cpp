#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> numbers{};
    char selection{};

    do
    {
        //Display Menu
        cout << "\nP - Print numbers" << endl;
        cout << "A - Add a number" << endl;
        cout << "M - Display mean of the numbers" << endl;
        cout << "S - Display the smallest numbers" << endl;
        cout << "L - Display the largest number" << endl;
        cout << "Q - Quit" << endl;
        cout << "\nEnter your choice: ";
        cin >> selection;

        if (selection == 'P' || selection == 'p')
        {
            if (numbers.size() == 0)
            {
                cout << "[] - the list is empty" << endl;
            }
            else
            {
                cout << "[ ";
                for (auto num : numbers)
                {
                    cout << num << " ";
                }
                cout << "]";
            }
        }
        else if (selection == 'A' || selection == 'a')
        {
            int num_to_add{};
            cout << "Enter an integer to add to an list: ";
            cin >> num_to_add;
            numbers.push_back(num_to_add);
            cout << num_to_add << " added" << endl;
        }
        else if (selection == 'M' || selection == 'm')
        {
            if (numbers.size() == 0)
            {
                cout << "Unable to calculate mean - no data" << endl;
            }
            else
            {
                int total{};
                for (auto num : numbers)
                {
                    total += num;
                    cout << "The mean is: " << static_cast<double>(total) / numbers.size() << endl;
                }
            }
        }
        else if (selection == 's' || selection == 'S')
        {
            if (numbers.size() == 0)
            {
                cout << "Unable to determine smallest -  list isn empty" << endl;
            }
            else
            {
                int smallest = numbers.at(0);
                for (auto num : numbers)
                {
                    if (num < smallest)
                    {
                        smallest = num;
                        cout << "the smallest number is " << smallest << endl;
                    }
                }
            }
        }
        else if (selection == 'L' || selection == 'l')
        {
            if (numbers.size() == 0)
            {
                cout << "Unable to determine largest -  list isn empty" << endl;
            }
            else
            {
                int largest = numbers.at(0);
                for (auto num : numbers)
                {
                    if (num > largest)
                    {
                        largest = num;
                        cout << "the largest number is " << largest << endl;
                    }
                }
            }
        }
        else if (selection == 'Q' || selection == 'q')
        {
            cout << "Goodbye!!" << endl;
        }
        else
        {
            cout << "Unknown selection, please try again" << endl;
        }
    } while (selection != 'q' && selection != 'Q');
    return 0;
}