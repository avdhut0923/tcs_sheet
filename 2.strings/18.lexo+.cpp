#include <bits/stdc++.h>
using namespace std;

int main(){
    string str = "jaishreeram";
        // string str = "Java";

    int len = str.length();
    for(int i=0;i<len;i++){
        if(str[i]=='z'){
            str[i]=str[i]-26; //-26 again reach to initial ascii value of alphabate
        }
        if(str[i]=='Z' ){
            str[i]=str[i]-26;
        }
        str[i]=str[i]+1;
    }
    cout<<str;
}