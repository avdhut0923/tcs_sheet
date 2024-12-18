#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void CountFreq (int arr[] , int n){ // m2//int CountFreq (int arr[] , int n)
    
    vector<bool> visited(n,false);

    for(int i = 0;i<n;i++)
    {
        if(visited[i]==true){
            continue;
        }
        int count = 1;
        for(int j = i+1;j<n; j++)
        {
            if(arr[i]==arr[j]){
                visited[j]=true; //m1//visited[j]==true likha tha 
                count++;
            }
        }
        cout<<arr[i]<<" " << count << endl;
    }
}
int main(){
    int arr[]={5,10,15,10,4,10,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    CountFreq(arr,n );
    return 0;
}

// method 2
#include <bits/stdc++.h>
using namespace std;

void CountFreq(int arr[], int n ){

    unordered_map<int , int > map;

    for(int i = 0;i<n;i++){
        map[arr[i]]++;
    }

    for(auto a:map){
        cout<< a.first<< " "<< a.second<<endl;
    }
}

int main(){
    int arr[] = {10,15,15,10,5,3,15,10};
    int n = sizeof(arr)/sizeof(arr[0]);
    CountFreq(arr,n);
    return 0;

}
