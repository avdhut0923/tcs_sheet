#include <bits/stdc++.h>
using namespace std;

bool sortele(pair<int,int> a , pair<int,int > b){
    if(a.second==b.second)
    return a.first<b.first;
    return a.second>b.second;
}

void sortElementByFreq(int arr[],int n){
    unordered_map<int ,int>mp;
    for(int i=0;i<n;i++){
        mp[arr[i]]++;
    }
    vector<pair<int,int>>vec;
    for(auto it = mp.begin();it!=mp.end();it++){
        vec.push_back({it->first,it->second });
    }
    sort(vec.begin(),vec.end(),sortele);
    for(int i=0;i<vec.size();i++){
        while (vec[i].second>0)
        {
            cout<<vec[i].first<<" ";
            vec[i].second--;
        }
        
    }
    cout<<endl;

}

int main(){
    int arr[]= {1, 2, 3, 2, 4, 3, 1, 2};
    int n=sizeof(arr)/sizeof(arr[0]);
    sortElementByFreq(arr,n);
}
