#include <bits/stdc++.h>
using namespace std;

int main() {

  char str1[100] ={'j','a','i'};
  char str2[100]= {'s','h','r','e','e'};
  char str3[100]= {'k','i','r','s','h','n','a'};
  // strcat take chracter array
  strcat(str1,str2); //concate array of string
  strcat(str1,str3); //concate array of string
  cout<<str1<<endl;

  string st1="ram";
  string st2="krishna";
  string st3="hari";
  st1.append(st2);
  st1.append(st3);
  cout<<st1;

}