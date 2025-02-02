#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[]={1,2,-3,-5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int result = INT_MIN;
    for(int i=0;i<n;i++){
       int  maxprd=1;
        for(int j=i;j<n;j++){           
            maxprd=maxprd*arr[j];
            result=max(result,maxprd);

        }
    }
    cout<<"max prd sub array is : "<<result;
}