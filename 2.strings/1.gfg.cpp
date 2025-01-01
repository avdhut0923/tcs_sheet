
class Solution {
  public:
    // Function to check if a string is a palindrome.
    bool istrue(int i,string &s){
         
       
        if(i>=s.length()/2){
            return true;
        }
        if(s[i]!=s[s.length()-i-1])return false;
        
        return istrue(i+1,s);
    }
    bool isPalindrome(string& s) {
      return istrue(0,s);   //mistake was i wasn't returning istrue just calling isture
    }
};
