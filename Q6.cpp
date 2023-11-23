#include <iostream>
using namespace std;
int main() {
    int dividend, divisor, remainder, quotient;
    cout<<"MAKE SURE THAT DIVIDEND IS GREATER THAN THE DIVISOR"<<endl;
    cout<<"ENTER THE DIVIDEND "<<endl;
    cin>>dividend;
    cout<<"ENTER THE DIVISOR  "<<endl;
    cin>>divisor;
    if (dividend < divisor) {
        cout<<"PLEASE ENTER DIVIDEND AGAIN AND MAKE SURE IT IS GREATER THAN DIVISOR"; }
    remainder = dividend;
    for (int i = 1; i <= dividend; i++) {
        remainder -= divisor;
        if (remainder < divisor) {
            quotient = i;
            break;   }
    }
    cout<< dividend <<"/"<<divisor<<"="<<quotient<<endl;
    return 0;
}

