#include <bits/stdc++.h>
using namespace std;
void change_case(string str, int len){
   for(int i=0;i<len;i++){
    int ascii=(int)str[i];

    if(ascii>=65 && ascii<=90){ // char in upper
        str[i]=tolower(str[i]);
    }
     else if(ascii>=97 && ascii<=122){ // char in lower
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