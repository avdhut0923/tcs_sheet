#include <bits/stdc++.h>
using namespace std;

int main(){
    int a=0;
    int b=1;
    int c;
    int n=10;
    cout<<a<<" "<<b<<" ";
    for(int i=1;i<n;i++){
      c=a+b; 
      a=b;
      b=c;
       
       cout<<b<<" ";
    }
}