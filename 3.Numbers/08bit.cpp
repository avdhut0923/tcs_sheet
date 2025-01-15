#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter no.";
    cin>>n;
    n=n>>31;
    if (n==0)cout<<"positive";
    else cout << "negative";
}