#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[]={6, 7, 8, 9, 10,11};
    int n=6;
    int k=9;
    int low=0,high=n-1,ans=-1;
    
    while (low<=high)
    {
        int mid=(high+low)/2;
        if(arr[mid]<k){
            low=mid +1;
        }
        else if (arr[mid]>k)
        {
            high=mid-1;
        }
        else{
            ans=mid;
            break;
        }
       
    }   
     cout<<"requird element is at "<<ans<<endl;     
}