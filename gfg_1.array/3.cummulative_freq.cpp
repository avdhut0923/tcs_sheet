// https://www.blackbox.ai/chat/SlUaKHJ   do see correction
class Solution {
  public:
    vector<int> countFreq(vector<int>& arr) {
        map<int,int>mp;
        int n=arr.size();
        vector<int>ans;
        for(int i=0;i<n;i++){
            mp[arr[i]]++;
        }
        int cum=0;
        for(auto it:mp){
          cum=cum+it.second;
          ans.push_back(cum);
        }
        return ans;
        
    }
};
