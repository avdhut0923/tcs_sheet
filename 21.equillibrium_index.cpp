#include <bits/stdc++.h>
using namespace std;

int equIndex(int arr[],int n){
    for (int i=0;i<n;i++){
        // int k=0,j=n-1;
        // if(i==0) k==0;
        // if(i==n-1) j==0;
        int sumRight =0;
        int sumLeft  =0;
        for(int j=i+1;j<n;j++){ //handle edge case 
           sumRight=sumRight+arr[j];
        }
        for(int k=i-1;k>=0;k--){
            sumLeft=sumLeft+arr[k];
        }
        if(sumLeft==sumRight) {
            cout<<"equilibrium index is "<<i<<" have value "<<arr[i]<< endl;
        } 
        
    }
}

int main(){
    int arr[]={1,-1,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    equIndex(arr,n);
    return 0;
}