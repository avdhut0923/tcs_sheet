#include<bits/stdc++.h>
using namespace std;

bool isprime(int n){
    if(n==1)return false;
    if(n==2)return true;
    if(n%2==0)return false;

    for(int i=3;i<=sqrt(n);i++){
        if(n%i==0){
            return false;
        }
    }
    
     return true;
}
 
int main()
{
    int n1 = 1;
    int n2 = 107;
    for(int i=n1;i<=n2;i++){
        if(isprime(i))cout<<i<<" ";
        // else cout<<"not prime"; 
    }   
    return 0;
}