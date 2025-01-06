#include <bits/stdc++.h>
using namespace std;

void max_char(string &str,int len){
    int max=INT_MIN;
    int freq[26]={0};
    for(int i=0;i<len;i++){
        freq[str[i]- 'a']++;
    }
    for(int i=0;i<25;i++){
        if(max<freq[i]){
            max=freq[i];
        }
    }
     cout<<" highest freq characters are ";
    for(int i=0;i<25;i++){
        if(max==freq[i]){
           cout<< static_cast<char>(i+'a')<< " ";
        }
    }
}

int main(){
    string str = "jai shree ram jai shree ram";
    int len = str.length();
    max_char(str,len);
}