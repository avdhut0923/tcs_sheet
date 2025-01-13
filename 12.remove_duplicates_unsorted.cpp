#include <bits/stdc++.h> // we actually not removing element in ths particular method
//map method is also good for this question , only print unique values 
//or sort method method is also good

using namespace std;

void usortRemDup(int arr[],int n){
    int mark[n];
    for(int i=0;i<n;i++){
         mark[i] = 1;
    }
        // all elements in an array are false 
    for(int i=0;i<n;i++){
        if (mark[i]==1){
            for(int j=i+1;j<n;j++){
                if(arr[i]==arr[j]){
                    mark[j]=0;
                }
            }
        }

    }
    for(int i=0;i<n;i++){
        if(mark[i]==1){
            cout<<arr[i]<<" ";
        }
    }

}

int main(){
    int arr[] = {2,3,54,2,5,6,7,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    usortRemDup(arr,n);
}
