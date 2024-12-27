#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[]={20 ,15, 26, 2, 98 ,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int copyarr[n] ;
    copy(arr,arr+n,copyarr) ;  //copy(originalArray, originalArray + size, copiedArray)
    
  
    sort(copyarr, copyarr + n);// arr,arr+n simply sort the array
   
    // for (auto n : copyarr){
    //     cout<<n<<" ";
    // }
    map<int,int>mp;
    int temp=1;
    for (int i=0;i<n;i++){
        if(mp[copyarr[i]]==0){   //if element is priviously not stored in the array 
           mp[copyarr[i]]=temp;  // store element  with temp as its value (for rank)
           temp++; 
        }
        
    }
     for (int i=0;i<n;i++){
       cout<<mp[arr[i]]<<" ";
    }
}