#include <bits/stdc++.h>
using namespace std;

bool isautomorphic(int n, int sq){
    while (n>0)
    {
        if(n%10 !=  sq%10)return false;
        n=n/10;
        sq=sq/10;

    }
    return true;
    
}

int main() {
    int n = 25;
    int  sq = n*n;  
    if(isautomorphic(n,sq))cout<<"automorhpic";
    else cout<<" not automorhpic";
}