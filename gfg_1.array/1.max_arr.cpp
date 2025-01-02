//{ Driver Code Starts
#include <bits/stdc++.h>
#include <limits.h>
#include <random>
#include <sstream>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> minAnd2ndMin(vector<int> &arr) {
      
        int min=INT_MAX,S_min=INT_MAX;
        for(int i=0;i<arr.size();i++){
            if(arr[i]<min){
                S_min = min;  // forgot
                min=arr[i];
            }
            if(arr[i]<S_min && arr[i] != min){
                S_min=arr[i];
            }
        }
        vector<int> ans(2);
        if(min==S_min || S_min==INT_MAX ||min==INT_MAX ){
            ans[0]=-1;
        }
        else {
           ans[0]=min;
           ans[1]=S_min;
        }
        return ans;
    }
};
