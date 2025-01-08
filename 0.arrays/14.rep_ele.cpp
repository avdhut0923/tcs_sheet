#include <bits/stdc++.h>
using namespace std;

void rep_ele(int arr[],int n ){
    unordered_map<int,int > mp;
    for(int i= 0;i<n;i++){
        mp[arr[i]]++;
    }
    for(auto it:mp){
        if(it.second>1){
            cout<<it.first<<" ";
        }
    }
}

int main(){
    int arr[]={3,4,2,4,3,6,6,5,3};
    int n = sizeof(arr)/sizeof(arr[0]);

    rep_ele(arr,n);
}