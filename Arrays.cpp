#include<bits/stdc++.h>
using namespace std;
int main(){
    char vowel[] {'a','e','i','o','u'};
    cout<<"The first vowel is: "<<vowel[0]<<endl;
    cout<<"The last vowel is: "<<vowel[4]<<endl;

   // cin>>vowel[5]; out of bounds.

   double hi_temps[] {90.1,89.8,77.5,81.6};
   cout<<"Tge first high temperature is "<<hi_temps[0]<<endl;
   hi_temps[0]=100.7;

   cout<<"The first hight temperature is now "<<hi_temps[0]<<endl;
   

    return 0;
}