#include <bits/stdc++.h>
using namespace std;

bool isleap(int n){
    if(n%400==0 || n%4==0 && n%100!=0)return true;
    return false;
}

int main(){
    int n=2304;
    if(isleap(n))cout<<"leap year";
    else cout<<"not a leap year";
}