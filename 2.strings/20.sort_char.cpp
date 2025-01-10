#include <bits/stdc++.h>
using namespace std;

void sort_char(string str, int len){
    int freq[26]={0};
    string ans="";
    for(int i=0;i<len;i++){
        freq[str[i]-'a']=1;
    }
    for(int i=0;i<26;i++){
        if(freq[i]==1){
            ans.push_back(i+'a');
        }
    }
    cout<<ans;
}

int main(){
    string str = "jaishreeram";
    int len = str.length();
    sort_char(str,len);
}