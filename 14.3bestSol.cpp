#include <bits/stdc++.h>
using namespace std;

void findUniqueRep(vector<int>& arr){

    unordered_map<int,int>Unq;
    for(auto i:arr) 
    ++Unq[i];

    cout<< "the repeating elemnts are: ";
    for(auto i:Unq){
        if(i.second>1){
            cout << i.first<<" ";
        }
    }

}

int main(){
    vector<int>arr = {1,2,3,5,3,4,8,2,6,3,54,6,6,5,4,0,9,0};
    findUniqueRep(arr);
    return 0 ;

}