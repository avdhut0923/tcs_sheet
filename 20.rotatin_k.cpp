#include <bits/stdc++.h>
using namespace std;

void rev(int arr[] ,int start , int end){

    // start=arr[start];
    // end=arr[end];
    while(start<end){
        int temp = arr[start];
        arr[start] =arr[end];
        arr[end] =temp;
        start++;
        end--;
    }

    // int i =start;
    // int j=end;
    // for(int i=start;i<end;i++)

}

void rotation(int arr[],int n,int k ,int dir){
    k=k%n;
    
    if(dir==1) //rotate right
    {
        
        rev(arr,0,n-1-k);
        rev(arr,n-k,n-1);
        rev(arr,0,n-1);
    }
    else{
        rev(arr,0,k-1);
        rev(arr,k,n-1);
        rev(arr,0,n-1);

    }
}

int main(){
    int arr[]={1,2,3,4,5,6,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k;
    int dir;
    cout<<"enter 1->right rotation "<<endl<<"0->left rotation"<<endl<<"also prit k"<<endl;
      cin>>dir>>k; // string data taken 
    rotation(arr,n,k,dir);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}