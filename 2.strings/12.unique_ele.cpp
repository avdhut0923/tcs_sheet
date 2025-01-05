#include <bits/stdc++.h>
using namespace std;

void unique_ele(string &str,int len ){

     // Remove spaces from the string
    str.erase(remove(str.begin(), str.end(), ' '), str.end());
   

    sort(str.begin(), str.end()); // need to remove spaces //also sort according to ASCII VALUE
    cout<<str<<endl;
    
    if(str[0]!=str[1])cout<<str[0]<<" ";//for first element
    if(str[len-1]!=str[len-2])cout<<str[len-1]<<endl;//for last element
    
    for(int i=1;i<len-1;i++){
        if((str[i]!=str[i+1])&&(str[i]!=str[i-1])){
            cout<<str[i]<<" ";
        }
    }
}

int main(){
    string str ="Jai shree ram";
    int len =str.length();
    unique_ele(str,len);
}