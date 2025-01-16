#include <bits/stdc++.h>
using namespace std;

int main(){
    int n=5;
    int d=-3;
    int a = -3;
    int sum=0;
    for(int i=1;i<=n;i++ ){ // we iterate only 4 times as we alrady added a to the sum
        sum=sum+a;
        a=a+d;

    }
    cout<<"sum of ap is : "<<sum;
    
}