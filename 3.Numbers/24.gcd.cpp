#include <bits/stdc++.h>
using namespace std;

void gcd(int a, int b ){
    int min=0;
    if(a<b)min=a;
    else min =b;
    int gcd =0;

    for(int i=1;i<=min;i++){
        if(a%i==0 && b%i==0)gcd=i;
    }
    cout<<gcd;
}

int main(){
    int a=24;
    int b=18;
    gcd(a,b);
}