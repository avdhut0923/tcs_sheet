class Solution {
  public:
    double findMedian(vector<int> &arr) {
        // code here.
        sort(arr.begin(),arr.end());
        int n=arr.size();
        if(n%2==0){
            int I1=n/2-1;
            int I2 = n/2;
            return (arr[I1]+arr[I2])/2.0;
        }
        else // odd no. of elements
        {
            return arr[n/2];
        }
    }
};
