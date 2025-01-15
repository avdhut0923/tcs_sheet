#include <bits/stdc++.h>
using namespace std;
void fun(int n,int sum){
    if(n<1){
        cout<<"sum is : "<< sum;
        return;
    }
    fun(n-1,sum+n);

}
int main(){
    int n;
    cout<<"enter no.";
    cin>>n;
    int sum=0;
    fun(n,sum);
    
}