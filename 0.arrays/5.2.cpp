#include <bits/stdc++.h>
using namespace std;

void CountFreq(int arr[], int n ){

    unordered_map<int , int > map;

    for(int i = 0;i<n;i++){
        map[arr[i]]++;
    }

    for(auto a:map){
        cout<< a.first<< " "<< a.second<<endl;
    }
}

int main(){
    int arr[] = {10,15,15,10,5,3,15,10};
    int n = sizeof(arr)/sizeof(arr[0]);
    CountFreq(arr,n);
    return 0;

}

