#include <bits/stdc++.h>
using namespace std;
int main()
{
    int l{}, b{}, h{};
    double base_cost{2.50};

    const int tier1_threshhold{100};
    const int tier2_threshhold{500};

    int max_dimension_length{10};

    double tier1_surcharge{0.10};
    double tier2_surcharge{0.25};

    int package_volume{};

    cout << "Welcome to the package cost calculator" << endl;
    cout << "Enter length, width and height of the package seperated by spaces: ";
    cin >> l >> b >> h;

    if (l > max_dimension_length || b > max_dimension_length || h > max_dimension_length)
    {
        cout << "Sorry, package rejected - dimension exceeded" << endl;
    }
    else
    {
        double package_cost{};
        package_volume = l * b * h;
        package_cost = base_cost;

        if (package_volume > tier2_threshhold)
        {
            package_cost += package_cost * tier2_surcharge;
            cout << " adding tier 2 surcharge" << endl;
        }
        else if (package_volume > tier1_threshhold)
        {
            package_cost += package_cost * tier1_surcharge;
            cout << " adding tier 1 surcharge" << endl;
        }
        cout << fixed << setprecision(2);
        cout << "The volume of your package is: " << package_volume << endl;
        cout << "Your package will cost $" << package_cost << " to ship " << endl;
    }
    return 0;
}