#include<iostream>
using namespace std;

bool isprime(int n){
    if(n==1)return false;
    if(n==2)return true;
    int count=0;
    // int sqRoot=(n);

    for(int i=2;i<=n;i++){
        if(n%i==0){
            count++;
        }
    }
    if(count ==1)return true;
    else return false;

}
 
int main()
{
    int n = 107;
    if(isprime(n))cout<<"prime hai";
    else cout<<"not prime";
    
    
    return 0;
}