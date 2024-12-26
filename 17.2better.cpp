#include <bits/stdc++.h>
using namespace std;
int maxSubArr(vector<int>& vec ){
    int n=vec.size();
    int result = INT_MIN;
    for(int i=0;i<n;i++){
        int prd =1;
        for(int j=i;j<n;j++){
            prd=prd*vec[j]; 
            result=max(result,prd);
        }
    }
    return result ;
}

int main(){
     vector<int>vec ={1,2,-3,0,-4,-5};
     cout<<"max subarry prd is "<<maxSubArr(vec);

}