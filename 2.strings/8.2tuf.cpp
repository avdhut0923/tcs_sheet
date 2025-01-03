#include <bits/stdc++.h>
using namespace std;

string rmBracket(string &str, int len){
    string ans;
    for(int i=0;i<len;i++){
        if(str[i]!='(' &&  str[i]!=')'){
            ans.push_back(str[i]);
        }
    }
    return ans;
}

int main(){
    string str = "a+((b-c)+d)";
    int len= str.length();
    cout<<rmBracket(str,len);
}