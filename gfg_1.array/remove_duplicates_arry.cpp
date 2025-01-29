class Solution {
  public:
    int removeDuplicates(vector<int> &arr) {
        // code here
        int n= arr.size();
        set<int>myset;
        for(int i=0;i<n;i++){
            myset.insert(arr[i]);
        }
        int k = myset.size();
        int j=0;
        for(auto x : myset){
            arr[j++]=x;
            
        }
        for(int i=0;i<k;i++){
            cout<<arr[i]<<" ";
        }
    }
    
};
