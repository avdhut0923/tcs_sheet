#include <bits/stdc++.h>
using namespace std;

int main(){

    int n = 23003209;
    cout<<n<<endl;
    int d=0;
    int ans=0;
    int i=0;

    while(n>0){
        d=n%10;
        if(d==0){
            ans=ans + (pow(10,i++))*1;
        }
        else{  //d!=0
            ans=ans+(pow(10,i++))*d;
        }
        n=n/10;
    }
     cout<<ans;
}