#include<bits/stdc++.h>
using namespace std;
int main(){
    float e,u;
    const float usd_per_eur(1.19);

    cout<<"Welcome to EUR to USD converter"<<endl;

    cout<<"Please enter amount in EUR:";
    cin>>e;

    u=e*usd_per_eur;

    cout<<e<<" euros is equivalent to "<<u<<" dollars"<<endl;
    return 0;
}