#include <bits/stdc++.h>
using namespace std;

string remSpace(string &str,int len){
    for(int i=0;i<len;i++){
        str[i]=tolower(str[i]); //if user dont want to change string then add capital conditions to if function
        if(str[i] ==' '){

            str = str.substr(0,i)+str.substr(i+1);
            i--;
        }
        
    }
    return str;
}

int main(){
    string str = "Jai Shree Ram";
    int len = str.length();
    cout<<"changed string is "<< remSpace(str,len);
}