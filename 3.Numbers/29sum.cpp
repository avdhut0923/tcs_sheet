#include <bits/stdc++.h>
using namespace std;

int SUM(int n ){
    return n*(n+1)/2;

}

int main(){
    int n1 = 5;
    int n2 = 9;
    int ans;
    ans=SUM(n2)-SUM(n1-1);
    cout<<ans;
       
}