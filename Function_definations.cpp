#include <bits/stdc++.h>
using namespace std;

const float pi(3.14159);
float calc_area_circle(float r)
{
    return pi * r * r;
}

float calc_volume_cylinder(float r, float h)
{
    return calc_area_circle(r) * h;
}
void area_circle()
{
    float r;
    cout << "Eneter the radius of the circle: ";
    cin >> r;

    cout << "The area of a circle with radius " << r << " is " << calc_area_circle(r) << endl;
}

void volume_cylinder()
{
    float r, h;
    cout << "Eneter the radius of the cylinder: ";
    cin >> r;
    cout << "Eneter the height of the cylinder: ";
    cin >> h;

    cout << "The volume of the cylinder with radius " << r << " and height " << h << " is " << calc_volume_cylinder(r, h) << endl;
}
int main()
{
    area_circle();
    volume_cylinder();

    return 0;
}