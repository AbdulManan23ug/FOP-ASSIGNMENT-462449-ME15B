#include <iostream>
#include <string>
using namespace std;
int main() {
    string stng, result;
    bool found;
    cout<<"Enter String: ";
    cin>>stng;
    result = "";
    for (int i = 0; i < stng.length(); i++) {
        found = false;
        for (int j = 0; j < result.length(); j++) {
            if ( stng[i] == result[j] ) {
                found = true; }
}
        if (found == false) {
            result += stng[i];
        }
    }
    cout<<"RESULT "<<result;
    return 0;
}

