#include <bits/stdc++.h>
using namespace std;

int main(){
    string str1 = "jaishreeram";
    string str2 = "krishnahari";
    int len1=str1.length();
    int len2=str2.length();
    string ans="";
    for(int i=0;i<len1;i++){
        bool found=false;
        for(int j=0;j<len2;j++){
            if(str1[i]==str2[j]){
                found=true;
            }            
        }
        if(found==false){
            ans.push_back(str1[i]);
        }
    }
    cout<<ans;
    return 0;

}