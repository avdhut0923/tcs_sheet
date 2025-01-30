class Solution {
  public:
    int search(int n, int arr[]) {
        // code
        for(int i=0;i<n;i++){
            if(arr[i]!=arr[i+1]){
                return arr[i];
            }
            else{// if(arr[i]==arr[i+1])
                i=i+1; //effectively i=i+2 as code has already one increment
            }
        }
    }
};
