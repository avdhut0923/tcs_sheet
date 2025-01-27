#include <bits/stdc++.h> 

void rotateArrayTwo(int n, char d, int r, vector < int > & num) {
    // Write your code here.
    r=r%n;
    if(d=='f'){
        
        reverse(num.begin(),num.begin() + (n - r));
        reverse(num.begin()+(n-r),num.end());
       reverse(num.begin(),num.end());
    }
    else if(d=='b') // d==b
    {
       reverse(num.begin(),num.begin()+r);
       reverse(num.begin()+r,num.end());
       reverse(num.begin(),num.end());

    }
   
}
