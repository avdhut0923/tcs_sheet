#include <bits/stdc++.h>
using namespace std;

int main(){
    string str = "jai shree ram bhai jai shree ram ";
    int len = str.length();

    string temp="";
    stack <string > st;

    for(int i=0;i<len;i++){  // filling strings in stack 
        if(str[i]==' '){
            st.push(temp);
            temp="";
        }
        else{
            temp=temp + str[i];
        }
    }
    string ans="";
    while(st.size()!=0){
        ans=ans+st.top()+" ";
        st.pop();
    }
    cout<<ans;
}