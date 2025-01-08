#include <bits/stdc++.h>
using namespace std;

void insertBegin(int arr[],int k ){
    // int n= sizeof(arr)/sizeof(arr[0]);
    for(int i=5;i>=0;i--){
        arr[i]=arr[i-1];
    }
    arr[0]=k;
}
void insterAtPos(int arr[], int pos,int ele){
    for(int i=5;i>=pos-1;i--){
        arr[i]=arr[i-1];
    }
    arr[pos-1]=ele;

}

int main(){
    int arr[6]={4,5,4,7,3};
    cout<<"ele to add";
    int k;
    cin>>k;
    // insertBegin(arr,k);
    // for(int i=0;i<6;i++){
    //     cout<<arr[i]<<" ";
    // }
    insterAtPos(arr,3,k);
     for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
}