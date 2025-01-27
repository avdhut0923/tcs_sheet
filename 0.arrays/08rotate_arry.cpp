#include <bits/stdc++.h>
using namespace std;

void rotateLeft(vector <int> &arr, int n, int k){
    k=k%n;
    reverse(arr.begin(),arr.begin()+k);
    reverse(arr.begin()+k,arr.end());
    reverse(arr.begin(),arr.end());

}

int main(){
    vector<int > arr={1, 2, 3, 4, 5, 6, 7};
    int n = arr.size();
    int k = 3;
    rotateLeft(arr,n,k);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}