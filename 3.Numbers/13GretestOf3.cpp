#include <bits/stdc++.h>
using namespace std;

int main(){
    float n=5;
    float m = 5.00001;
    float l = 4.9;
    if(l>m){
        if(l>n)cout<<l<<" is largest";
        else cout<<n<<" is largest";    //   n>l
    }
    else{  // m>l
       if(m>n)cout<<m<<" is largest";
       else cout<<n<<" is largest";   // m<n

    }
    cout<<endl;
    cout<<"largest no. is "<<max(n,max(m,l));  // we cannot compare three no.s directly inside argument it is not allowd
   


    
}