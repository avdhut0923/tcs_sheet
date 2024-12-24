#include <bits/stdc++.h>
using namespace std;

int retUniqueDup(vector<int>& arr){
    sort(arr.begin(),arr.end());

    cout<<"the unique repeating elemnts are";
    for(int i = 0 ; i<arr.size()-1;i++){
        if(arr[i]==arr[i+1]){
            cout<<arr[i]<< " ";
        }
    }
}

int main(){
    vector<int> arr = {1,2,6,3,8,2,4,5,7,7,3,5,2,9,6};
    retUniqueDup( arr);
    return 0;
}

// not good solution
// print 1 1 1 3 4 5 6 6 is posible in this solution