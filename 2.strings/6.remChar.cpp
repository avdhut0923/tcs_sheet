#include <bits/stdc++.h>
using namespace std;

string remChar(string &str){
    string result;
    for(char c : str){
        if((c>= 'a'&& c<= 'z') || (c>= 'A'&& c<= 'Z') ){
            result=result+c;      
        
    }
    }
    
    return result;
}

int main(){
    string str = "take12% *&u ^$#forward";
    // int len = str.length();
    cout<<"changed string "<<remChar(str);
}