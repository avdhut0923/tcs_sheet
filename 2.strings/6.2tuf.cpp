#include <bits/stdc++.h>
using namespace std;

string onlyAlphabates(string &str,int len){
    string ans;
    for(int i=0;i<len;i++){
        int ascii = (int)str[i];
        if((ascii >=65 && ascii<=90) || (ascii >=97 && ascii<=122)  ){
            ans.push_back(str[i]);
        }
    }
    return ans;
}

int main(){
     string str = "take12% *&u ^$#forward";
     int len = str.length();
     cout << "changed string is "<<onlyAlphabates(str,len);
     return 0 ;
}