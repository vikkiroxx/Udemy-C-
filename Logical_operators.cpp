#include<bits/stdc++.h>
using namespace std;
int main(){
    int num{};
    const int lower(10);
    const int upper(20);

    cout<<boolalpha;

    // cout<<"Enter an integer-the bounds are "<<lower<<" and "<<upper<<": ";
    // cin>>num;

    // bool within_bounds{false};

    // within_bounds=(num>lower && num<upper);
    // cout<<num<<" is between "<<lower<<" and "<<upper<<": "<<within_bounds<<endl;

    
    // cout<<"Enter an integer - the bounds are "<<lower<<" and "<<upper<<": ";
    // cin>>num;

    // bool outside_bounds{false};
    // outside_bounds = (num<lower || num>upper);
    // cout<<num<<" is outside "<<lower<<" and "<<upper<<": "<<outside_bounds<<endl;

    
    //    cout<<"Enter an integer - the bounds are "<<lower<<" and "<<upper<<": ";
    //    cin>>num;

    //    bool on_bounds{false};
    //    on_bounds=(num==lower || num==upper);
    //    cout<<num<<" is on one of the bounds which are "<<lower<<" and "<<upper<<": "<<on_bounds<<endl;



    bool wear_coat{false};
    double temperature{};
    int wind_speed{};

    const int wind_speed_for_coat{25};  //above this
    const double temperaure_for_coat{45}; //below this

    cout<<"Enter the current temperature in (F): ";
    cin>>temperature;
    cout<<"Enter the wind speed in (mph): ";
    cin>>wind_speed;

    wear_coat=(temperature<temperaure_for_coat || wind_speed>wind_speed_for_coat);
    cout<<"Do you want to wear a coat  using OR: "<<wear_coat<<endl;

    wear_coat=(temperature<temperaure_for_coat && wind_speed>wind_speed_for_coat);
    cout<<"Do you want to wear a coat  using AND: "<<wear_coat<<endl;
    return 0;
}