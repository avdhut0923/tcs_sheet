#include <bits/stdc++.h>
using namespace std;
void change_case(string str, int len){
   for(int i=0;i<len;i++){
    if(str[i]==' ')continue;
    else if(isupper(str[i])){
        str[i]=tolower(str[i]);
    }
    else if(islower(str[i])){
        str[i]=toupper(str[i]);
    }
   }
   cout<<str;
}

int main(){
    string str = " Jai shree RAM";
    int len= str.length();
    change_case(str,len);
}