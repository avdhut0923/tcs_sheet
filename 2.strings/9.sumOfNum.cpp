#include <bits/stdc++.h>
using namespace std;
int sumNum(string &str,int len){
    int sum = 0;
    string temp; //dynamic length //
    for(int i=0;i<len;i++){
        if(isdigit(str[i])){ //str[i]>=0 && str[i]<=9 isteed
            temp=temp+str[i];// Append the digit to temp
        }
        else {
            if(!temp.empty()){ // If there's a number at the end of the string, add it to the sum
                sum=sum+stoi(temp);// Convert temp to integer and add to sum
                temp.clear();// Clear temp for the next number
            }
           
        }
    }
    // If there's a number at the end of the string, add it to the sum
    if(!temp.empty()){ 
        sum=sum+stoi(temp);
    }
    return sum;
}

int main(){
    string str = "12jai shree ram99mahakal90";
    int len = str.length();
    cout<<"sum of numbers is "<< sumNum(str,len);
}