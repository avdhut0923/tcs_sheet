class Solution {
  public:
    void reverseArray(vector<int> &arr) {
        int i=0;
        int n=arr.size();
        int j=n-1;
        while(i<j){
            int temp = arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
      for(int i=0;i<n;i++){
          cout<<arr[i]<<" ";
      }
    // cout<< arr;
    }
};
