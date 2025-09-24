class Solution {
  public:
    bool isPalindrome(string& s) {
        string rev = s;
        reverse(rev.begin(),rev.end());
        if(rev==s) return true;
        else return false;
        
    }
};