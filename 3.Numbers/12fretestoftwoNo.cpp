#include <bits/stdc++.h>
using namespace std;

int main(){
    int n=5;
    float m = 5.00001;
    if(n>m)cout<<"n is greter than m ";
    else cout<<"m is greater than n";
    cout<<endl;
    int ans;
    // ans = max(n,m); // max function doesnt support two diffrent type of variables to compare
    ans = max(n,4);
    cout<<"maximum no is "<<ans;

    
}