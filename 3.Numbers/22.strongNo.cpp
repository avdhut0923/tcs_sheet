#include <bits/stdc++.h>
using namespace std;

int facto(int d){
    if(d==1 || d==0)return 1;
    int fact=1;
    for(int i=d;i>1;i--){
        fact=fact*i;
    }
    return fact;
}

void strongNum(int n) {
    int ogNum=n;
    int factSum=0;
    int d=0 ; // digit
    while(n>0){
        d=n%10;
        n=n/10;
        factSum=factSum+facto(d);
    }  
    if(factSum==ogNum)  cout<<"given no. is storng"<<endl;
    else cout<<"no. is not strong ";
}

int main() {
    int n = 15;
    strongNum(n);
}