#include <bits/stdc++.h>
using namespace std;

string remVovle(string str,int len){
    for(int i=0;i<len;i++){
        str[i]=tolower(str[i]);
        if(str[i]=='a' ||str[i]=='u' ||str[i]=='o' ||str[i]=='i' ||str[i]=='e'  )
        {
           str=str.substr(0,i) + str.substr(i+1);
           i--;
        }
    }
    return str;
}

int main(){
    string str= "jai shree ram";
    int len = str.length();
    cout<<"ans string "<< remVovle(str,len);
}