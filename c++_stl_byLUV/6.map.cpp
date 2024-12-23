#include <bits/stdc++.h>
using namespace std;

void print(map<int,string> &m){
   cout<< m.size()<< endl;
   for(auto &pr : m){
        cout<<pr.first<<" "<< pr.second << endl;
    }
}

int main(){
    map<int , string>m;
    m[1] = "abc";
    m[4] = "bcd";
    m[6] = "cde";
    m[2] = "afg";
    m.insert({5,"ram"});

    // map<int,string> :: iterator it;
    // for(it=m.begin();it!=m.end();++it){   // it!=m.end() points to end of the (map +1 )th position
    // cout<<(*it).first<< " " << (*it).second<<endl;

    // }

    // m2 to print maps 
    print(m);

    

}