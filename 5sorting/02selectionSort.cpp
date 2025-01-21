#include <bits/stdc++.h>
using namespace std;

// in every iteration one element is transferd to its actual location

int main(){
    int arr[] = {13,46,24,52,20,9};
    int n= sizeof(arr)/sizeof(arr[0]);

    for(int i=0;i<n-1;i++){
        int mini=i;
        for(int j=i+1;j<n;j++){
            if(arr[mini]>arr[j]){
                mini=j;
            }
        }
        if(mini!=i){
            int temp = arr[i];
            arr[i]=arr[mini];
            arr[mini]=temp;
        }
        else continue;  // little bit optimized
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}