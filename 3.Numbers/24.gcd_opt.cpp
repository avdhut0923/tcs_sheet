#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
   while(b!=0){ 
        int temp=b;
        b=a%b;
        a=temp;
   }
    return a;

}

int main(){
    int a=45;
    int b=30;
    cout<<gcd(a,b);
}