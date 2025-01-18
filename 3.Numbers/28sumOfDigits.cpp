#include <bits/stdc++.h>
using namespace std;

int main(){
    int n = 1348;
    int sod = 0;
    while (n>0)
    {
        sod=sod + n%10;
        n=n/10;
    }
    cout<<"sum of digits of "<<n<<" is "<<sod;
      

    
}