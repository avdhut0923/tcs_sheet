#include <bits/stdc++.h>
using namespace std;

int main(){
    int n=5;
    int arr[5][2]={ {1,2},{2,1},{3,4},{4,5},{5,4}};
    unordered_map<int,int>mp;
    cout<<"symmetric elemnts pair are :"<<endl;
    for(int i=0;i<n;i++){
        int first = arr[i][0];
        int second = arr[i][1];
        if(mp.find(second)!=mp.end() && mp[second]==first){
            cout<<"("<<first<<" "<<second<<")"<<endl;
        }
        //mp.find(second)!=mp.end() //serches for any key is presnt that match with second elemnt of current ietration
        //mp[second]==first // for that same key is it second element matches with first or not 
        else{
            mp[first]=second; // mp[key]=value
            //store elemnent in the map
        }

    }
}