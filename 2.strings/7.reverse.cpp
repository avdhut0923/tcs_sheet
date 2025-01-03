#include <bits/stdc++.h>
using namespace std;
void swap(string &str,int i ,int j){
     char temp = str[i];
            str[i]=str[j];
            str[j]=temp;
            // return str;
}

string reverse(string &str,int len){
    int i=0;
    int j=len-1;
        while(i<j){
           swap(str,i,j); //forgot to send i,j in func call
            i++;
            j--;
        }
        return str;
    
}

int main(){
    string str = "JaiShreeRam";
    int len = str.length();
    cout<<"reveresed string " << reverse(str,len);
}