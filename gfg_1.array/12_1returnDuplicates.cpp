class Solution {
  public:
    vector<int> findDuplicates(vector<int>& arr) {
        // code here
        int n=arr.size();
        vector<int>ans;
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[arr[i]]++;
            
        }
        int i=0;
        for(auto it:mp){
            if(it.second>1){
                ans[i]=it.first;
                i++;
            }
        }
        return ans;
        // for(int j=i+1;j<=n;j++){
        //     arr
        // }
    }
};
