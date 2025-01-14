#include <bits/stdc++.h>
using namespace std;

int pallin(int n){
    int pal=n;
    int digit=0;
    int rev=0;
    while(n>0){
        digit=n%10;
        n=n/10;
        rev=rev*10 +digit;
    }
    if(pal==rev)return true;
    else return false;
}

int main(){
    int min=100;
    int max=1000;
    int ans=0;
    for(int i=min;i<max;i++){
        ans=pallin(i);
        if(ans)cout<<i<<" ";
    }
    return 0;
}