#include <iostream>
using namespace std;
int main(){
int num;
    cout << "PLEASE ENTER THE NUMBER ";
    cin>>num;
    cout<<"THE FACTOR OF "<<num<<" : " ;
    for (int i = 1; i <= num; i++) {
        if (num%i==0) {
            cout<<i<<"\n";
         }
    }
    return 0;
}

