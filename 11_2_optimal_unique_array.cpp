#include <bits/stdc++.h>
using namespace std;

int uniqueArray(int arr[],int n){
     int i=0;
	for(int j=1;j<n;j++){
		if(arr[i]!=arr[j]){
			arr[i+1]=arr[j];
			i++;
		}

	}
    return i+1;
    cout<<i+1;

}

int main(){
    int arr[] = {1,3,3,5,5,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k =uniqueArray(arr,n);
    for (int i = 0 ; i<k;i++){
        cout << arr[i]<< " ";
    }
    cout << endl;
   
	cout<<"size of unique elements array is "<<k;
}
