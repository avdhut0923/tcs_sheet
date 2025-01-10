#include <bits/stdc++.h>
using namespace std;

int main(){
    string str = "jai shree ram";
    int len = str.length();
    int space=0;
    for(int i=0;i<len;i++){
        if(str[i]==' '){
            space++;
        }
    }
    cout<<"no. of words are "<<space + 1;
       
}