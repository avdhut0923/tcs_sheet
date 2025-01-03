#include <bits/stdc++.h>
using namespace std;

string remSpace(string &str,int len){
    int count =0;
    for(int i=0;i<len;i++){
        if(str[i]!=' '){
            str[count]=str[i];
            count++;
        }         
        
    }
    str[count]='\0';  
    return str;
}

int main(){
    string str = "Jai Shree Ram";
    int len = str.length();
    cout<<"changed string is "<< remSpace(str,len);
}