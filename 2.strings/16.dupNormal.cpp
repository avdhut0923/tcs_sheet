#include <bits/stdc++.h>
using namespace std;

void dup(string str,int len){
   int freq[26]={0};
   for(int i=0;i<len;i++){
    freq[str[i]-'a']++; // stores count of character 
   }
for(int i=0;i<26;i++){  // mistake for(int i=0;i<//len//;i++)
    if(freq[i]>1){
        cout<<(char)(i+'a')<<" "<<freq[i]<<endl;
    }
   }
}

int main(){
    string str = "sinstriiintng";
    int len = str.length();
    dup(str,len);
}