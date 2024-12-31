#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr1[]= {1,3,4,5,2,32};
    int arr2[]= {2,4,3,1,7,5,15};
    int n1 = sizeof(arr1)/sizeof(arr1[0]);
    int n2 = sizeof(arr2)/sizeof(arr2[0]);
    // if(n1>n2){
    //     cout<<"arr1 is not a subset of arr2";      // we can break function  , so making function is better approach
        
    // }
    int cnt=0;
    for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++){
            if(arr1[i]==arr2[j]){
                cnt++;
                continue;
            }
        }
    }
    if(cnt==n1)cout<<"arr1 is subset of arr2";
    else cout<<"arr1 is not a subset of arr2";
    return 0;

}