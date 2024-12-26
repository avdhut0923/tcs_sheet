#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[]={1,2,-3,0,-4,-5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int result=0;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            {
                  int prd=1;
                for(int k=i;k<=j;k++){
                    prd=prd*arr[k];
                    result=max(prd,result);

                }
            }

        }
    }
    cout<<"max prd is "<<result<<endl;
}