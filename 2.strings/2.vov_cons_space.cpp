#include <bits/stdc++.h>
using namespace std;

int solve(string str , int len){
    int vovel_ct=0,consonent_ct=0,space_ct=0;
    for(int i=0;i<len;i++){
        str[i]=tolower(str[i]);
       
    }
    for(int i=0;i<len;i++){
         if(str[i] == 'a' ||str[i] == 'e' ||str[i] == 'u' ||str[i] == 'o' ||str[i] == 'i'  ) //str[i] == "a"   is not valid for char
         {
            vovel_ct++;
         }
         else if( str[i] > 'a' && str[i]<='z')consonent_ct++;
         else if(str[i]==' ')space_ct++;
    }
    cout<<"vovels:"<<vovel_ct<<"\n";
    cout<<"space:"<<space_ct<<"\n";
    cout<<"consonents:"<<consonent_ct<<"\n";
}

int main(){
    string str = "*Jai Shree Ram !";
    int len = str.length();
    solve(str,len);
}