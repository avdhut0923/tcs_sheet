#include <bits/stdc++.h>
using namespace std;

void rep_ele(int arr[],int n ){
    sort(arr,arr+n);

    if(arr[0]!=arr[1])cout<<arr[0]<< " "; //1st ele handle
    for(int i=1;i<n-1;i++){
        if(arr[i]!=arr[i-1] && arr[i]!=arr[i+1])cout<<arr[i]<<" ";
    }
    if(arr[n-1]!=arr[n-2])cout<<arr[n-1];
    
}

int main(){
    int arr[]={3,4,2,4,3,6,6,5,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    rep_ele(arr,n);    
}