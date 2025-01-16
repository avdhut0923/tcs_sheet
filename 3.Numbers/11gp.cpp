#include <bits/stdc++.h>
using namespace std;

int main(){
    int n=5;
    float r=0.5;
    float a = 1;
    float sum;
    for(int i=1;i<=n;i++){
        sum=sum+a;
        a=a*r;
    }
   
    cout<<"sum of GP is : "<<sum;
    
}