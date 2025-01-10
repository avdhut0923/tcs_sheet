#include <bits/stdc++.h>
using namespace std;

string longest_word(string str,int len){
    string longWord="";
    string seclongWord="";
    for(int i=0;i<len;i++){
        if(str[i]==' '){
            if(seclongWord.length()>longWord.length()){
            longWord=seclongWord;
            }
            seclongWord="";       
        }   
        else{
            seclongWord.push_back(str[i]);             
        }    
    }
    if(seclongWord.length()>longWord.length()) //check for last word
        longWord=seclongWord;

    return longWord;
}

int main(){
    string str = "jai shree ram";
     // string str = "Java";
    int len = str.length();
    cout<<longest_word(str,len);
    
}