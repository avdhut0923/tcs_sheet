// contribute issue in take u forward web in first solution 
#include <bits/stdc++.h>
using namespace std;

set<int> dup;  // need to be declare globally
void returnDuplicate(int arr[], int n){
    
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                dup.insert(arr[j]); //jo unique elemnts hai wo sirf ek bar hi ennter honge 
                // break;     even if we use this  getting same results 
            }
        }
    }
}
int main(){
    int arr[]={1,1,5,2,2,2,7,3,4,4};
	int n = sizeof(arr)/sizeof(arr[0]);
	returnDuplicate(arr,n);//
	cout<<"the array of unique duplicate elements is :"<<endl;
	 for(auto x:dup){
        cout<<x<<" ";
    }
}