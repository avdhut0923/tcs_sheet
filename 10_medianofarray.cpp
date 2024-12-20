#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[]={2,1,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0;i<n;i++){
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                int temp = arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
            else{
                continue;
            }
        }
    }
    cout <<"sorted array "<< endl;
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    float median = 0 ;
    if(n%2==0){
        int index1 =n/2 -1 ;
        int inedx2 = n/2;
        median=( arr[index1] + arr[inedx2])/2.0;//2.0 is float value which was missing in my first code

    }
    else{
        median = arr[n/2];
    }
    cout << "median of given array is "<<median << endl;

}
