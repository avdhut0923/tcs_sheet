#include <bits/stdc++.h>
using namespace std;

int main(){
    int n = 378;
    int ognum=n;
    int sum=0;
    while(n>0){
        sum=sum + n%10;
        n=n/10;
    }
    if(ognum%sum==0)cout<<"num is harshed ";
    else cout<<"num is not harshed ";
}