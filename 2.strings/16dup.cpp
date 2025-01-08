#include <bits/stdc++.h>
using namespace std;

void dup(string str,int len){
    unordered_map<char,int > mp;
    for(int i=0;i<len;i++){
        mp[str[i]]++;
    }
    for(auto it:mp){
        if(it.second>1){
            cout<<it.first<<" "<<it.second<<endl;
        }
    }
}
int main(){
    string str = "sinstriiintng";
    int len = str.length();
    dup(str,len);
}