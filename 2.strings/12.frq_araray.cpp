#include <bits/stdc++.h>
using namespace std;

void unique_ele(string &str,int len ){
    int frq[26]={0};
    for(int i=0;i<len;i++){
        if(str[i]==' ')
         continue;
        else
         frq[str[i]-'a']++; 
    }

    for(int i=0;i<len;i++){
        if(frq[str[i]-'a']==1 && str[i]!=' '){
            cout<<str[i] << " ";
        }
    }

    
}

int main(){
    string str ="jai shree ram";
    int len =str.length();
    unique_ele(str,len);
}