class Solution {
  public:
    int firstNonRepeating(vector<int>& arr) {
        // Complete the function
        unordered_map<int,int>mp;
        int n=arr.size();
        for(int i=0;i<n;i++){
            mp[arr[i]]++;
        }
       
        for(int i=0;i<n;i++){
            if(mp[arr[i]]==1){
                return arr[i];
            }
            
        }

        
        return 0;
        
    }
};
