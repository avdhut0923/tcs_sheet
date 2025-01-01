#include <bits/stdc++.h>
using namespace std;

bool pallindrome( int i , string &s  ){
    if(i>=s.length()/2)return true;    //s.length()== s.size()work correctly
    if(s[i]!=s[s.length()-i-1])return false;
    return pallindrome(i+1,s);
}

int main(){
    string s = "madam";
    cout<<pallindrome(0,s);
    cout<<endl;
    return 0;
}