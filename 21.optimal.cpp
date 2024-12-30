#include <bits/stdc++.h>
using namespace std;

void eqbIndex(int arr[],int n){
    int totalsum = 0;
    for(int i=0;i<n;i++){
        totalsum+=arr[i];
    }
    int leftsum=0,rightsum=totalsum;
    for(int i=0;i<n;i++){
        rightsum-=arr[i];
        if(rightsum==leftsum){
            cout<<"eqb index is "<<i<<endl;
        }
        leftsum+=arr[i];
    }
}

int main(){
    int arr[]={2, 3, -1, 8, 4};
    int n=sizeof(arr)/sizeof(arr[0]);
    eqbIndex(arr,n);
}