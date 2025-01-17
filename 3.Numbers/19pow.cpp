                                
#include <bits/stdc++.h> 
#include <iostream>
using namespace std;

int mypow(int x,int n){
    double ans=1;
    if(n<0){
        x=1/x;
        n=-n-1 ; // convert to positive and reduced by one //also now power becomes positive
        ans=ans*x;
    }
    while (n>0)
    {
        if(n%2==1){
            ans=ans*x;
            n=n-1;
        }
        else{      // even no.
           n=n/2;
           x=x*x;


        }
    }
    return ans;
    
}

int main() {
  double x=3;
  double n=9;
  cout<<" power ans :"<< mypow(x,n);
}

                                
                            