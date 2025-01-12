#include <bits/stdc++.h>
using namespace std;
void sec_small(int arr[],int n){
    int s=INT_MAX;
    int ss=INT_MAX;
    for(int i=0;i<n;i++){
        if(s>arr[i]){
            ss=s;
            s=arr[i];
        }
        else if(ss>arr[i] && ss!=s){
            ss=arr[i];
        }
    }
    cout<< "second smallest : "<<ss;
   
}
void sec_largest(int arr[],int n){
    int l=INT_MIN;
    int sl=INT_MIN;
    for(int i=0;i<n;i++){
       if(l<arr[i]){
        sl=l;
        l=arr[i];
       }
       else if(sl<arr[i] && sl!=l){
        sl=arr[i];
       }
    }
    cout<< "second largest : "<<sl;
   
}


int main(){
    int arr[]={4,7,23,8,90,32};
    int n = sizeof(arr)/sizeof(arr[0]);
    sec_small(arr,n);
    cout<<endl;
    sec_largest(arr,n);
}