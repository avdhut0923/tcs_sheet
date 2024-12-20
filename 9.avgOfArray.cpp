#include <bits/stdc++.h>
#include <iostream> 
using namespace std;

int main(){
    int arr[]={3,4,4,3,4,5,6,7,8,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    float avg=0;
    float sum = 0;
    for(int i=0;i<n;i++){
        sum= sum +arr[i];

    }
    avg=sum/n;
    cout<< "avg of given array is "<<avg<<endl;


}
