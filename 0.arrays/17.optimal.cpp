#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[]={3, 2, -1, 4, -6, 3, -2, 6};
    int n=sizeof(arr)/sizeof(arr[0]);

    int maxi=INT_MIN;
    int suff = 1;
    int pref= 1;
    for (int i=0 ;i<n; i++){
        if(pref==0) pref=1;
        if(suff==0) suff=1;

        pref=pref*arr[i];
        suff=suff*arr[n-1-i];  // n-1 last position of array
        maxi = max(maxi,max(suff,pref));
    }
    cout<<"maximum product subarrat is : "<<maxi;
}