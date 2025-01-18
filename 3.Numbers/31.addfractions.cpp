#include <bits/stdc++.h>
using namespace std;

int Gcd(int a, int b){
    while(b!=0){
        int temp = b;
        b=a%b;
        a=temp;
    }
    return a;
}

int main(){
    int nume1 = 3;
    int nume2 = 2;
    int den1= 4;
    int den2= 5;
    cout<<nume1<<"/"<< den1<<" + "<< nume2<<"/"<< den2 << " = ";


    int gcd = Gcd(den1,den2);
    int LCM= den1*den2/gcd;

    nume1 = nume1*den2;
    // cout<<nume1 << endl;
    nume2 = nume2*den1;
        // cout<<nume2<< endl;


    int final_numerator =nume1+nume2;
    int final_denomerator = LCM;

    
    cout<<final_numerator<<"/";
    cout<<final_denomerator;
}