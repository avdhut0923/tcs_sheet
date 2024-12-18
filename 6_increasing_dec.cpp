#include <bits/stdc++.h>
using namespace std;

void  IncreasingDecreasing (int arr[],int n ){
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[i]){     // acending order mai aa jayega
                int temp = arr[i];  // swap logic
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(int i=0;i<n/2;i++)  //printing first half ascending
    {
        cout<<arr[i]<< " ";
    }
    for(int i=n-1;i>=n/2;i--) // printing second half descending 
    {
        cout<<arr[i]<< " ";
    }

}
int main(){
    int arr[]={ 2, 4, 5, 6 ,20, 15, 9 ,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    IncreasingDecreasing(arr,n);
    return 0;

}
