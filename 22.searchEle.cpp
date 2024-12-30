#include <bits/stdc++.h>
using namespace std;

void searchEle(int arr[],int n , int k){
    for(int i=0;i<n;i++){
        if(k==arr[i])cout<<"index is "<<i;
    }
}

int main(){
    int arr[]={6,7,9,5,3,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k;
    cout<<"enter k ";
    cin>>k;
    searchEle(arr,n,k);
    return 0;
}