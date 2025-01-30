class Solution {
  public:
    int findOnce(vector<int>& arr) {
        // code here.
        int n=arr.size();
        for(int i=0;i<n;i++){
            if(arr[i]==arr[n-1] && arr[i]!=arr[i-1]){
                return arr[n-1];  // handeling last element to avoid out bound acced
            }
            if(arr[i]!=arr[i+1]){
                return arr[i];
            }
            else {
                i=i+1;  // effectively i=i+2
            }
        }
    }
};
