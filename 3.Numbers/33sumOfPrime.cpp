#include <bits/stdc++.h>
using namespace std; 

bool isprime(int a){  // always recives i>=3//also always have odd no.
    // if(n<2)return false ;
    // if(n==2) return true ;
    // if(n%2==0)return false;  // no need 
    for(int i=2;i<=sqrt(a);i++){
        if(a%i==0)return false;
    }
    return true;
}

void sumOfTwoPrime(int n){
    if(n<=4)cout<<"can not be expressed as prime sum";  // smallest no. that can be possible is 5 = 
    if(n%2!=0)//odd no.   // only possibility is 2 + n-2 else not  .. refer notes
    { 
        if(isprime(n-2))cout<<"yes"<<endl<<n<<" = "<<"2 + "<<n-2;
        // else it is not possible
    }
    else // even no. can be expressed as two odd prime numbers sum 
    {
        for(int i=3;i<=n/2;i=i+2){
            // if(isprime(i) && isprime(n-i))cout<<"yes"<<endl<<n<<" = "<<i<<" + "<<n-i;  // if we want all pairs run this code 
            if(isprime(i) && isprime(n-i)){
                cout<<"yes"<<endl<<n<<" = "<<i<<" + "<<n-i;
                break;  // only want one pair of ans 
            } 
        }
    }
}

int main(){
    int n=74;
    sumOfTwoPrime(n);
}