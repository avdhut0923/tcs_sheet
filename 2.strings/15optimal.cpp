#include <bits/stdc++.h>
using namespace std;

string remDup(string &str,int len){
    string ans = "";
    vector<bool>vec(26,false);
    for(int i=0;i<len;i++){
      if(vec[str[i]-'a']==false){
        ans=ans+str[i];
        vec[str[i]-'a']=true;

      }
    }
 
  return ans;
}

int main(){
    string str = "jaishreeram";
    int len = str.length();
    cout<<remDup(str,len);
}