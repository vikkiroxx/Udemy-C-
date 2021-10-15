#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,k;
    cout<<"Enter three integers: ";
    cin>>i>>j>>k;

    int sum = i+j+k;

    float avg = static_cast<double>(sum)/3;

    cout<<"Three integers entered: "<<i<<" "<<" "<<j<<" "<<k<<endl;
    cout<<"Sum of three integers: "<<sum<<endl;
    cout<<"Averagee of three integers: "<<avg<<endl;

    return 0;
}