# include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[] ={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"enter value of k"<<endl;
    int k;
    cin>>k;
    vector <int>dummy(n,0);
    for(int i=k;i<n;i++)
    {
        dummy[i-k]=arr[i];  // i-k will provide initial position
    }                       //bec i is initialised with k 
    for(int j=n-k;j<n;j++){
        dummy[j]=arr[j-(n-k)]; // simimarly j-(n-k) will provide initial position
    }                          //bec j is initialised with n-k 
    for(int i=0;i<n;i++){
        cout<<dummy[i]<<" ";
    }
}                        // use of functions can provide ans for any arry that we pass 
                         // but in given code we have to change array every time
