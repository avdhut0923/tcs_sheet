    #include <bits/stdc++.h>
    using namespace std;

    int main(){
        int  n=132431;
        int rev=0;
        int d=0;
        int palin=n;  // reserving value of n to compare later 
        while(n>0){
            d=n%10;
        n=n/10;
        rev=rev*10 + d;
        }
        cout<<rev<<endl;
        if(palin==rev)cout<<"given no. is pallindrome";
        else cout<<"given no. is not pallindrome";
    }