#include <iostream>
#include <string>
using namespace std;
int main()
{
    string stng1, stng2, rotated;
    rotated= "";
    cout<<"ENTER YOUR FIRST STRING "<<endl;
    cin>>stng1;
    cout<<"ENTER YOUR SECOND STRING: "<<endl;
    cin>>stng2;
    if (stng1==stng2) {
        for (int i=0; i < stng1.length(); i++) {
            rotated = stng1[i] + rotated;
        }
        cout<<"BOTH STRINGS ARE EQUAL THEREFORE ROTATED STRING IS "<<endl;
        cout<<rotated;
    }
    else {
        cout<<"BOTH STRINGS ARE UNEQUAL";
    }
    return 0;}

