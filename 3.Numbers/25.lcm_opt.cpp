#include <bits/stdc++.h>
using namespace std;
// not good method in case of larg numbers

int gcd(int a, int b ){
    while(b!=0){
        int temp=b;
        b=a%b;
        a=temp;
    }
    return a;
}

int main(){
    int a=24;
    int b=18;
    int Gcd =gcd(a,b);
    int Lcm = (a*b)/Gcd;
    cout<<Lcm;
}