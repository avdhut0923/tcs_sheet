#include <bits/stdc++.h>
using namespace std;

int main(){
   int n=2345;
//    int preserv=n;
   int d=0;
   int rev=0;
   while(n>0){
    d=n%10;
    n=n/10;
    rev=rev*10+d;
   }
   cout<<"reversed no. is :"<<rev <<endl;

   int noOfDigits;
   noOfDigits=(floor)(log10(232)) + 1;  //shortcut to find no.of digits
   cout<<noOfDigits;
}