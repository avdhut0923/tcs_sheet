#include <bits/stdc++.h>
using namespace std;

int main(){
 int  n=11;
 unsigned long fact=1;
 for(int i=2;i<=n;i++){
    fact=fact*i;
 }
 cout<<"factorial is : "<<fact;
}