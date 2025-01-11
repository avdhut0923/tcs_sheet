#include <bits/stdc++.h>
using namespace std;
void change_case(string str, int len){
   for(int i=0;i<len;i++){
    int ascii = (int)str[i];

     if(ascii>=65 && ascii<=90)//upper case 
     str[i]=(char)(ascii + 32);

     if(ascii>=96 && ascii<=122)//upper case 
     str[i]=(char)(ascii - 32);
   }
   
   cout<<str;
}

int main(){
    string str = " Jai shree RAM";
    int len= str.length();
    change_case(str,len);
}