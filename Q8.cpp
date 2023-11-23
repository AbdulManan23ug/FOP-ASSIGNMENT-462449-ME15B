#include <iostream>
using namespace std;
int main(){
    int x,new_array[5+x], array[5] = {1,2,3,4,5} ;
    cout<<"ARRAY {";
    for (int i = 0; i<5; i++) {
        cout<<array[i];
        cout<<" , ";
    }
    cout<<"}"<<endl;
cout<<"ENTER HOW MANY ELEMENTS YOU WANT TO ADD TO THE ARRAY"<<endl;
cin>>x;
    for (int i = 0;i<5;i++) {
        new_array[i] = array[i];
    }
    cout<<"ENTER THE " << x << " NEW INTEGERS NEEDED TO BE ADDED TO ARRAY "<<endl;
    for (int i =5;i<5+x;i++)
        cin>>new_array[i];
    cout<<"NEW ARRAY WITH THE THE ADDITIONAL ELEMENTS"<<endl;
    cout<<"NEW ARRAY = {";
    for (int i = 0; i<5+x; i++) {
        cout<<new_array[i]<<" ";
        cout<<" , ";
    }
    cout<<"}"<<endl;
    return 0;
}

