#include <bits/stdc++.h>
using  namespace std;

void nonRepeating(vector<int>& arr){
    unordered_map<int,int>mp;
    for(auto i:arr){
        ++mp[i];
    }
    for(auto i:mp){
        if(i.second==1){
            cout<<i.first<<" ";
        }
    }
}

int main(){
    vector<int>arr = {1,3,2,5,7,9,3,4,6,7,0,5,5} ;
    nonRepeating(arr);
    return 0 ;
}