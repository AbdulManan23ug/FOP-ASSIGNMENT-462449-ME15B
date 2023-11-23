#include <iostream>
using namespace std;
int main() {
#define num 6	
int a[num], x,y,z;
cout<<"ENTER THE ELEMENTS OF ARRAY "<<endl;
   for(x=0;x<num;x++)
   {
   	cin>>a[x];}
      for(x =0;x<num-1;x++) { 
      for(y = 0; y < num-1-x; y++) {
         if(a[y] > a[y+1]) {
            z = a[y];
            a[y] = a[y+1];
            a[y+1] = z;}
}  }
   cout<<"SORTED ARRAY = ";
cout<<"{";
   for(x = 0; x < num; x++) {
      cout << a[x] << " ";
   }
cout<<"}";	
}

