#include <bits/stdc++.h>
using namespace std;

bool isprime(int n){
    if(n==1)return false;
    if(n==2)return true;
    if(n%2==0)return false;

    for(int i=3;i<=sqrt(n);i++){
        if(n%i==0){
            return false;
        }
    }    
    return true;
}

void divisors(int n){   // int n  we can use any variable as its just represent name of variale//more officially its a formal parameter
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            if(isprime(i))cout<<i<< " ";
            if(  (n/i != i) && isprime(n/i)){   // to avoid repetation of last factor in some cases like 6*6 in 36
                cout<<n/i<<endl;
            }
            else continue;
        }
    }
}

int main(){
    int n=36;
    divisors(n);
}