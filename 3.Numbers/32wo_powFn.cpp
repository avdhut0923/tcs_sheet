
#include <iostream>
using namespace std;

int replaceZerosWithOnes(int n){
    int d=0;
    int pow10=1;
    int ans = 0;
    while(n>0){
        d=n%10;
        if(d==0)
         {d=1;}

         ans=d*pow10 + ans;
         pow10=pow10*10;
         n=n/10;
    }
    return ans;
}

int main() {
   int n = 204;
   int result = replaceZerosWithOnes(n);
   cout << "After replacing zeros with ones " << n << " becomes " << result;
}