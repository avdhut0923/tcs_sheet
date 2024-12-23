#include <bits/stdc++.h>
using namespace std;

void insertBegin(int *arr,int n,int num ){
    for(int i =n-1;i>=0;i--){  // last element is inserted at (last + 1 )th position
        arr[i+1]=arr[i];
    }
    arr[0]=num;
    
    for(int i = 0 ; i<=n;i++){  //chalaki we are using n+1 position indirectly
        cout<<arr[i]<<" ";

    }

}
void insertEnd(int *arr,int n,int num ){
    // for(int i =0;i<n;i++){  // last element is inserted at (last + 1 )th position
    //     arr[i-1]=arr[i];
    // }
    arr[n]=num;
    
    for(int i = 0 ; i<=n;i++){  
        cout<<arr[i]<<" ";

    }

}

void insertPos(int *arr,int n , int num , int pos){
     for(int i =n-1;i>=pos-1;i--){  // last element is inserted at (last + 1 )th position
        arr[i+1]=arr[i];
    }
    arr[pos-1]=num;
    
    for(int i = 0 ; i<=n;i++){  //chalaki we are using n+1 position indirectly
        cout<<arr[i]<<" ";

    }

}
 
int main(){
    int arr[]= {3,4,5,6,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k ;
    cout<<"enter the corresponding number \n 1.insertBegin \n 2.insertEnd \n 3.insertpos \n ";
    cin>>k;
    int num ;
    cout<<"enter the number";
    cin>>num;

    
    int pos;
    switch (k)
    {
    case 1:
        insertBegin(arr,n,num);
        break;

    case 2:
        insertEnd(arr,n,num);
        break;

    case 3:
        
        cout<<"enter position to insert a number";
        cin>>pos;
        insertPos(arr,n,num,pos);
        break;
    
    default:
        break;
    }
    
}