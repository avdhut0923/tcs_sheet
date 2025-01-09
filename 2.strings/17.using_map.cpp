#include <bits/stdc++.h>
using namespace std;

void rem_rep(string  str1,int len1,string str2,int len2){
    string ans = "";
    unordered_map<char,int > mp;
    for(auto it:str2){
        mp[it]++;
    }
    for(int i=0;i<len1;i++){
        if(!mp[str1[i]]){   //refer :https://www.blackbox.ai/chat/mVYOGm8
            ans.push_back(str1[i]);
        }
    }
    cout<< ans;
}

int main(){
    // string str1 = "jaishreeram";
    // string str2 = "ramkrishnahari";
    string str1 = "abcdef"; // string 1
    string str2 = "cefz";
    int len1=str1.length();
    int len2=str2.length();
    rem_rep(str1,len1,str2,len2);   
    return 0;
}