#include <bits/stdc++.h>
using namespace std;
// 1 1 2 3 5 8 13 ....
int fibo(int n)
{
    if(n==1 || n==2)return 1;
    return fibo(n-1) + fibo(n-2);
}

int main(){
    int n=7;
    cout<<fibo(n);
}