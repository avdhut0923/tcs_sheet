#include <bits/stdc++.h>
using namespace std;

bool isabundant(int n){
    int divisorSum=1;  // we have to take proper divisors only // i took 1 by default and skipped n num itself//according to difination
    for(int i=2;i<sqrt(n);i++){
        if(n%i==0){
            divisorSum+=i ;
            if(n/i!=i){
                divisorSum+=n/i;
            }
        }

    }
    if(divisorSum>n)return true;
    return false;
}

int main(){
    // int n = 21;
    int n = 18;
    if(isabundant(n))cout<<"num is abundant ";
    else cout<< "num is not abundant";

    
}