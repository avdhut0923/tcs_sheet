#include <bits/stdc++.h>
using namespace std;
void min_ele(int arr[],int n){
    int min=INT_MAX;
    for(int i=0;i<n;i++){
        if(min>arr[i]){
            min=arr[i];
        }
    }
    cout<<min;
}

int main(){
    int arr[]={4,7,23,8,90,32};
    int n = sizeof(arr)/sizeof(arr[0]);
    min_ele(arr,n);
}