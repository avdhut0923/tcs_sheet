#include <bits/stdc++.h>
using namespace std;

int main(){
    int n=28;
    bool flag=0;  //The program effectively skips leading zeros by using the flag variable to track when the first '1' bit is encountered.
    for(int i=32;i>=0;i--){
        if((n>>i) & 1){
            flag=1;
            cout<<1;
        }
        else{
            if(flag==1){
                cout<<0;
            }
        }
    }
}