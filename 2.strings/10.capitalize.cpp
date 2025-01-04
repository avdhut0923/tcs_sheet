#include <bits/stdc++.h>
using namespace std;

string tocap(string &str,int len){
    str[0]=toupper(str[0]);
    for(int i=1;i<len;i++){
        if(str[i+1]== ' ' || str[i-1]== ' ' ){
            str[i]=toupper(str[i]);
        }             

    }
    str[len-1]=toupper(str[len-1]);
    return str;
}


int main(){
    string str = "jai shree ram";
    int len = str.length();
    cout<<"changed string is  "<< tocap(str,len);
}