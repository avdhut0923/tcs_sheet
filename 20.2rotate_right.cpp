#include <bits/stdc++.h>
using namespace std;

void rotationRight(int arr[], int n, int k ){
    int trr[n];
    for(int i=n-k ; i<n;i++)  //handaling last k elements
    {
        trr[i-(n-k)]=arr[i];
    }
    for(int i=0;i<=n-1-k;i++){  // handaling first n-k elements of original array

       trr[k+i]= arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<trr[i]<<" ";
    }


}

int main(){
    int arr[]={1,2,3,4,5,6,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k;
    cout<<" prit k"<<endl;
      cin>>k; // string data taken 
    rotationRight(arr,n,k);
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }
    return 0;
}