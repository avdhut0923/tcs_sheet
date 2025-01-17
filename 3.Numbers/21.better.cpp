#include <bits/stdc++.h>
using namespace std;

void primeFactors(int n){
    for(int i=2;i<=n;i++){
        if(n%i==0){
            cout<< i<<" ";
            while(n%i==0){
                n=n/i;
            }
        }

    }
}

int main(){
    int n = 1010;
    primeFactors(n);
}