#include <bits/stdc++.h>
using namespace std;

bool isarmstronge(int n){
    int store=n;
    int digit=0;
    int sumOfCubes=0;
    while(n>0){
        digit=n%10;
    n=n/10;
    sumOfCubes=sumOfCubes+(digit*digit*digit);
    }
        cout<<sumOfCubes<<endl;

    if(store == sumOfCubes)return true;
    else return false;


}

int main(){
    int n=153;
    isarmstronge(n)?cout<<"no. is armstrong":cout<<"no.is not armstrong";
}