#include <bits/stdc++.h>
using namespace std;

bool pallindrome(string s){
   int left=0,right = s.length()-1;
   while(left<right){
    if(!isalnum(s[left]))left++;
    else if(!isalnum(s[right]))right++;
    else if(tolower(s[left])!=tolower(s[right]))return false;
    else{
        left++;
        right--;
    }

   }
   return true;
}

int main(){
    string s="abcdcb a";
    bool ans = pallindrome(s);

    if (ans==true)cout<<"pallindrome";
    else cout<<"not pallindrome";
    return 0;
}