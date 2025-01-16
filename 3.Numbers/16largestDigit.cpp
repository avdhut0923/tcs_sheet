#include <bits/stdc++.h>
using namespace std;

int main(){
int n=8736549;
   int d=0;
   int minD=9;
   int max_digit =0;
   while(n>0){
    d=n%10;
    n=n/10;
    if(max_digit<d){
        max_digit=d;
    }
    minD=min(minD,d)  ;  
   }
    cout<<"max digit is : "<<max_digit<<endl;
    cout<<"min digit is : "<<minD;

   
}