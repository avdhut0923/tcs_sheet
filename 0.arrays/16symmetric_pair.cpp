#include <bits/stdc++.h>
using namespace std;

int main(){
    int n=5;
    int arr[5][2]={{2,1},{3,4},{1,2},{4,3},{4,4}};
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++){
        int first = arr[i][0];
        int second = arr[i][1];
           // second is compared with all keys in map
        if(mp.find(second)!=mp.end() && mp[second]==first){
                                        // value of that key is compared with all the values of map
            cout<<"("<<first<< " "<<second<<")";
        }
        else{
            mp[first]=second;
        }
    }

}