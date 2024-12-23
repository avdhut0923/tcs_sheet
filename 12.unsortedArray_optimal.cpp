#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void removeDuplicates(int arr[], int n){
    map<int,int > mp;
    for(int i=0; i<n;i++){
        if(mp.find(arr[i])==mp.end()){
            cout<<arr[i]<<" ";
            mp[arr[i]]++;
        }
    }
}

int main(){
    int arr[]= {3,4,5,2,7,3,5,2};
    int n= sizeof(arr)/sizeof(arr[0]);

    removeDuplicates(arr,n);
    return 0;
}