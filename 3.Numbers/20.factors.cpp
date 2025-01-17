#include <bits/stdc++.h>
using namespace std;

void divisors(int n){
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            cout << i << " ";
            if(n/i != i){   // to avoid repetation of last factor in some cases like 6*6 in 36
                cout<<n/i<<endl;
            }
            else continue;
        }
    }
}

int main(){
    int n=360;
    divisors(n);
}