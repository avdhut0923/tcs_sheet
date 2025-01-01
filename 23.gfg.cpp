
class Solution {
    // #include <bits/stdc++.h>
    // using namespace std;
  public:
    // Function to check if b is a subset of a
    bool isSubset(vector<int> &a, vector<int> &b) {
        int n1 = a.size();
        int n2 = b.size();
        
        if(n2>n1)return false;
        unordered_map<int,bool>mp;
        for(int i=0;i<n1;i++){
            mp[a[i]]=true;
        }
        for(int j=0;j<n2;j++){
            if(mp.count(b[j])==0)return false;
        }
        return true;
    }
};
