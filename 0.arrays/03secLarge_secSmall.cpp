vector<int> getSecondOrderElements(int n, vector<int> a) {
    // Write your code here.
    int small=INT_MAX;
    int sec_small=INT_MAX;
     int large=INT_MIN;
    int sec_large=INT_MIN;
    for(int i=0;i<n;i++){
        if(a[i]<small){
            sec_small=small;
            small=a[i];
        }
        if(a[i]<sec_small && a[i]!=small){
            sec_small=a[i];
        }  

        // for largest;

          if(a[i]>large){
            sec_large=large;
            large=a[i];
        }
        if(a[i]>sec_large && a[i]!=large){
            sec_large=a[i];
        }
    }
    // vector<int>ans;
    // ans.push_back(sec_large);
    // ans.push_back(sec_small);
    // return ans;
    return {sec_large,sec_small};
}
