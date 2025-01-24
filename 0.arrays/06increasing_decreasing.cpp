#include <bits/stdc++.h>
using namespace std;

void countFreq(int arr[],int n){
  sort(arr,arr+n);
  for(int i=0;i<n/2;i++){
    cout<<arr[i]<<" ";
  }
  for(int i=n-1;i>=n/2;i--){
    cout<<arr[i]<<" ";
  }
}

int main(){
    int arr[]= {8, 7, 1, 6, 5, 9};
    int n = sizeof(arr)/sizeof(arr[0]);
    countFreq(arr,n);
}