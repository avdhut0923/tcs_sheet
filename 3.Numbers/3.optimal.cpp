#include <bits/stdc++.h>
using namespace std;

bool isprime(int n){
    if(n==1)return false;
    if(n==2)return true;
    int count=0;
    // int sqRoot=(n);

    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
    

}
 
int main()
{
    int n = 17;
    if(isprime(n))cout<<"prime hai";
    else cout<<"not prime";
    
    
    return 0;
}