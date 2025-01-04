#include <bits/stdc++.h>
using namespace std;

string tocap(string &str,int len){
    
    for(int i=1;i<len;i++){
       if(i==0 || i== len-1)str[i]=toupper(str[i]);
       else if(str[i]==' '){
        str[i-1]=toupper(str[i-1]);
        str[i+1]=toupper(str[i+1]);
       }
    }
    
    return str;
}


int main(){
    string str = "jai shree ram";
    int len = str.length();
    cout<<"changed string is  "<< tocap(str,len);
}