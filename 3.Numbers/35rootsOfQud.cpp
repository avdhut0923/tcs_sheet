#include <bits/stdc++.h>
using namespace std;

void roots(int a,int b , int c){
    double D=b*b - 4*a*c;
    
    double val = sqrt(abs(D));
    double r1=0,r2=0;
    if(D>0) {
        cout<<"roots are real and different "<<endl;
        r1=(double)(-b+val)/2*a;
        r2=(double)(-b-val)/2*a;
        cout<<"r1 = "<< r1<< " r2 = "<<r2;
    }
    if(D<0) {
        cout<<"roots are complex "<<endl;
       cout<<"r1"<<" = "<<-(double)(b/2.0*a )<<" +i"<<val/2.0*a<<endl;
       cout<<"r2"<<" = "<<(double)(-b/2.0*a )<<" -i"<<val/2.0*a;
     
    }
    if(D=0) {
        cout<<"roots are real  "<<endl;
        
        r2=(double)(-b)/2.0*a;
        cout<<" r1 = r2 = "<<r2;
    }
    
}

int main(){
    int a=1,b=1,c=1;
    roots(a,b,c)    ;
}