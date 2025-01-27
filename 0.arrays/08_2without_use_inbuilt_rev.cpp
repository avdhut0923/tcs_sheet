#include <bits/stdc++.h>
using namespace std;

void rev(vector <int> &arr, int start, int end){
    while(start<end){
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]= temp;
        start++;
        end--;
    }
}

void rotateLeft(vector <int> &arr, int n, int k){
    k=k%n;
    rev(arr,0,k-1);
    rev(arr,k,n-1);
    rev(arr,0,n-1);

}

int main(){
    vector<int > arr={1, 2, 3, 4, 5, 6, 7};
    int n = arr.size();
    int k = 11;
    rotateLeft(arr,n,k);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}