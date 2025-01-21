#include <bits/stdc++.h>
using namespace std;

int main(){
    int n=230032;
    int i=0;
    int ans[32]={0};
    while(n>0){  // stores bits in reverse order
        ans[i]=n%2;
        i++;
        n=n/2;
    }
    // printing loop from i th position to 0
    for(int j=i-1;j>=0;j--){
        cout<<ans[j];
    }
    return 0;
}