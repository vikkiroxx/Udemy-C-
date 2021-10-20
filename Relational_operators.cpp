#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cout<<boolalpha;
    // cout<<"Enter two integers for comparision: ";
    // cin>>a>>b;

    // cout<<a<<">"<<b<<":"<<(a>b)<<endl;
    // cout<<a<<">="<<b<<":"<<(a>=b)<<endl;
    // cout<<a<<"<"<<b<<":"<<(a<b)<<endl;
    // cout<<a<<"<="<<b<<":"<<(a<=b)<<endl;

    const int lower(10);
    const int upper(20);

    cout<<"\nEnter an integer that is greater than "<<lower<<": ";
    cin>>a;
    cout<<a<<" > "<<lower<<" is "<<(a>lower)<<endl;
    
    cout<<"\nEnter an integer that is less than or equal to "<<upper<<": ";
    cin>>a;
    cout<<a<<" <= "<<upper<<" is "<<(a<=upper)<<endl;
    return 0;
}