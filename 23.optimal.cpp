#include <bits/stdc++.h>
#include <map>
using namespace std;

bool findSubarr(int arr1[],int n1,int arr2[],int n2){
    if(n1>n2)return false;
    unordered_map<int,bool>mp;
    for(int i=0;i<n2;i++){
        mp[arr2[i]]=true;
    }
    for(int j=0;j<n1;j++){
        if(mp.count(arr1[j])==0)return false;
    }
    return true;

}

int main(){
    int arr1[]={1,3,4,5,2};
	int arr2[]={2,4,3,1,7,5,15};

    int n1=sizeof(arr1)/sizeof(arr1[0]);
    int n2=sizeof(arr2)/sizeof(arr2[0]);

    bool ans = findSubarr(arr1,n1,arr2,n2);
    if(ans){
        cout<<"arr1 is subset of arr2"<<endl;
    }else{
        cout<<"arr1 is not subset of arr2"<<endl;
    }    
}