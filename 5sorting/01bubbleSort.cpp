#include <bits/stdc++.h>
using namespace std;

// in every iteration one element is transferd to its actual location

int main(){
    int arr[] = {13,46,24,52,20,9};
    int n= sizeof(arr)/sizeof(arr[0]);

    for(int i=0;i<n-1;i++){
        int didswap=0;
        for(int j=0;j<n-1;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j]= arr[j+1];
                arr[j+1] = temp;
                didswap=1;
            }
        }
        if(didswap==0){
            cout<<"already sorted ";  // optimization // in case array is already is already sorted 
            break;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}