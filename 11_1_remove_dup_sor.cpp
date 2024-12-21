// https://www.geeksforgeeks.org/set-in-cpp-stl/
// reference for understanding set 

#include <bits/stdc++.h>
using namespace std;

int removeDuplicate(int arr[],int n){
    set<int> myset;
	for(int i=0;i<n;i++)
	{
		myset.insert(arr[i]);
	}
	int k = myset.size();
	int j=0;
	for (auto x:myset){
		arr[j++]=x;
	}
	return k ;
}


int main(){
    int arr[]={1,1,1,2,2,3,3,4,4,4,4};
	int n = sizeof(arr)/sizeof(arr[0]);
	int k=removeDuplicate(arr,n);
	cout<<"the array after removing duplicate elements is :"<<endl;
	for(int i=0;i<k;i++)
	{
		cout<<arr[i]<<" ";
	}

}
