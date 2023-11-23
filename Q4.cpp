
#include <iostream>
using namespace std;
int main() {
    int n,  i, factor, j  ;
    cout<<"PLEASE ENTER YOUR NUMBER: ";
    cin>>n;
    i = n;
    while (i >= 2) {
        factor = 0;
        j = 1;
        while (j <= i) {
            if (i%j==0) {
                factor++;       }
            j++; }
        if (factor==2) {
            cout<<"THE HIGHEST PRIME NUMBER LOWER THAN N : "<<i;
            break;   }
        i--;   }
    return 0;
}

