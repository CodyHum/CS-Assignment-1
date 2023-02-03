#include<iostream>
using namespace std;
int main() {
        double no_of_share, rate, com_rate;
        double profit, cp, sp;
        no_of_share = 1000;
        rate = 45.5;
        com_rate = 0.02;
        cp = (no_of_share * rate)*(1 + com_rate);
        cout << "Amount joe paid for each stock: ";
        cout << cp << endl;
        cout << "Amount of commision joe paid his broker when he bought the stock: ";
        cout << no_of_share*rate*com_rate<<endl;
        cout << "The amount that joe sold the stock for: ";
        rate = 56.9;
        sp = (no_of_share * rate)*(1-com_rate);
        cout << sp << endl;
        cout << "The amount of commision Joe paid his broker when he sold the stock: ";
        cout << no_of_share*rate*com_rate << endl;
        cout << "Profit/Loss made is ";
        profit = sp - cp;
        cout << profit << " (-ve means loss)." << endl;
        getchar();
}