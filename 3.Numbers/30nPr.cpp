#include <bits/stdc++.h>
using namespace std;

int FACT(int n ){
    if(n==0 || n==1) return 1 ;
    int fact=1;
    for(int i=n;i>=2;i--){
        fact = fact*i;
    }
    return fact;
}

int main(){
    int n = 6;
    int r = 4;
    int ans;
    ans = FACT(n)/FACT(n-r);
    cout<<"nPr is : "<<ans; 
}