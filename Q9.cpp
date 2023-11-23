#include <iostream>
using namespace std;
int main()  {
    int array[6],X,sum,a,b,c;
    cout<<"PLEASE ENTER THE ELEMENTS OF ARRAY "<<endl;
    for (a=0; a<8; a++) {
        cin>>array[a]; }
    bool result = false;
    cout<<"PLEASE ENTER THE INTEGER X "<<endl;
    cin>>X;
    cout<<"TRIPLET GIVING SUM EQUAL TO INTEGER X ARE  "<<endl;
    for (a=0; a<8; a++) {
        for (b=0; b<8; b++) {
            if (a==b)
                continue;
            for (c=0; c<8; c++) {
                if (c== a || c == b)
                    continue;
                sum = array[a] + array[b] + array[c];
                if (sum == X) {
                    cout<<" ("<<array[a]<<", "<<array[b]<<", "<<array[c]<<")";
                    result = true;     }   }      }    }
    if (result == false) {
    	cout<<"\n";
    	cout<<"\n";
        cout<<"!!! SORRY NO SUCH TRIPLETS ARE PRESENT IN THE ARRAY !!!"<<endl;    }
    return 0;
}

