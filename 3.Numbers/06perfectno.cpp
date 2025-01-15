#include <bits/stdc++.h>
using namespace std;
// perfect sq cannot be a perfect no.
// dont need to handle case of repeatation of factors eg.6*6 have to consider only one factor

int main(){
    int n=28;
    int preserve = n;
    double sumOfDivisors = 1; // is always divisor of any number
    for(int i=2;i<sqrt(n);i++){
        if(n%i==0){
            sumOfDivisors += i;  // if i=2
            sumOfDivisors += n/i; // then n/i =14;
            
        }
    }
    if(preserve== sumOfDivisors)cout<<"given no. is perfect no.";
    else cout<<"given no is not a perfect no.";
}