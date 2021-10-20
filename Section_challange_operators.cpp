#include<bits/stdc++.h>
using namespace std;
int main(){
    int rupees,one_hundred,five_hundred,two_thousand,fifty,ten,twenty,two_hundred,five,two,one;
    cout<<"Enter the amount in rupees: ";
    cin>>rupees;

    two_thousand = rupees/2000;
    five_hundred = (rupees - two_thousand*2000)/500;
    two_hundred = (rupees-two_thousand*2000-five_hundred*500)/200;
    one_hundred = (rupees-two_thousand*2000-five_hundred*500-two_hundred*200)/100;
    fifty = (rupees-two_thousand*2000-five_hundred*500-two_hundred*200-one_hundred*100)/50;
    twenty = (rupees-two_thousand*2000-five_hundred*500-two_hundred*200-one_hundred*100-fifty*50)/20;
    ten = (rupees-two_thousand*2000-five_hundred*500-two_hundred*200-one_hundred*100-fifty*50-twenty*20)/10;
    five = (rupees-two_thousand*2000-five_hundred*500-two_hundred*200-one_hundred*100-fifty*50-twenty*20-ten*10)/5;
    two = (rupees-two_thousand*2000-five_hundred*500-two_hundred*200-one_hundred*100-fifty*50-twenty*20-ten*10-five*5)/2;
    one = (rupees-two_thousand*2000-five_hundred*500-two_hundred*200-one_hundred*100-fifty*50-twenty*20-ten*10-five*5-two*2);

    cout<<"2000: "<<two_thousand<<endl;
    cout<<"500: "<<five_hundred<<endl;
    cout<<"200: "<<two_hundred<<endl;
    cout<<"100: "<<one_hundred<<endl;
    cout<<"50: "<<fifty<<endl;
    cout<<"20: "<<twenty<<endl;
    cout<<"10: "<<ten<<endl;
    cout<<"5: "<<five<<endl;
    cout<<"2: "<<two<<endl;
    cout<<"1: "<<one<<endl;
    
    return 0;
}