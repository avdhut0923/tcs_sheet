#include <bits/stdc++.h>
using namespace std;

bool argan(string str1,int len1 , string str2 ,int len2){
    int freq1[26]={0};
    int freq2[26]={0};
    if(len1!=len2){
        return false;
    }
    for(int i=0;i<len1;i++){
        str1[i]=tolower(str1[i]);
        str2[i]=tolower(str2[i]);
    }
    for(int i=0;i<len1;i++){
        if(str1[i]==' ')continue;
        if(str2[i]==' ')continue;
       freq1[str1[i]-'a']++;
       freq2[str2[i]-'a']++;
    }
   
    for(int i=0;i<25;i++){ //although len1 and len2 are same
        if(freq1[i]!=freq2[i])    return false;
    }
      return true;
}

int main(){
    string str1 = "Ram";
    string str2 = "arM";
    int len1 = str1.length();
    int len2 = str2.length();
    bool ans =argan(str1,len1,str2,len2);
    if(ans)cout<<"strings are argan";
    else cout<<"strings are not argan";

}