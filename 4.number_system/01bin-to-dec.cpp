#include <bits/stdc++.h>
using namespace std;

void binTODec(int n , int len){
    
}

int main(){
    int n=101010;
    int ognum = n;
    // int len=floor(log10(n))+1;
    // binTODec(n,len);
    // int d=0;
    int ans=0;
    int powOfTwo=1;  //2^0 == 1
    while(n>0){
        ans = ans + (n%10)*powOfTwo;
        powOfTwo*=2;
        n=n/10;
    }
    cout <<ognum<<" convreted to "<<ans;
}