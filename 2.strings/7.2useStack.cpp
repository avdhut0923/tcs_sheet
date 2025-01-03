#include <bits/stdc++.h>
using namespace std;

int main(){
    string str = "Jai Jai Ram";
    stack<char>st;
    int n=str.length();

    for(int i=0;i<n;i++){
        st.push(str[i]);
    }
    int j=0;
    while (!st.empty())
    {
        char ele =st.top();
        st.pop();
        str[j]=ele;
        j++;
    }
    cout<<"the reversed string is "<< str;
    
}