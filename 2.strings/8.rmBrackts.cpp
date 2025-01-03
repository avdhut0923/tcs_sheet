#include <bits/stdc++.h>
using namespace std;

string rmBracket(string &str, int len){
    int ct=0;
    for(int i=0;i<len;i++){
        if(str[i]=='('|| str[i]==')'){
            str=str.substr(0,i)+str.substr(i+1);
            i--;
        }
    }
    return str;
}

int main(){
    string str = "a+((b-c)+d)";
    int len= str.length();
    cout<<rmBracket(str,len);
}