#include <bits/stdc++.h>
using namespace std;

void nonRepeating(int arr[],int n ){
    bool check;
    for(int i=0;i<n;i++){
        check=false;
        for(int j=0;j<n;j++){
            if(i!=j  &&  arr[i]==arr[j]){
                check=true;
                break;
            }
        }
        if(check==false){
            cout<<arr[i]<<" ";

        }
    }
}

int main(){
    int arr[]={1,3,2,4,3,6,4,8,5,9,6,0};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"non repeating elemnts are :";
    nonRepeating(arr,n);
}