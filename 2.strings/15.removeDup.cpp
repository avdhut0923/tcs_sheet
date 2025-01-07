#include <bits/stdc++.h>
using namespace std;

void remDup(string &str,int len){
   set<char>myset;
    for(int i=0;i<len;i++){
        myset.insert(str[i]);
    }
    for(auto it:myset){
        cout<<it<<" ";
    }
}

int main(){
    string str = "jai shree ram";
    int len = str.length();
    remDup(str,len);
}
