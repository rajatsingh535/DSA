class Solution {
  public:
    bool isRotated(string& s1, string& s2) {
        if(s1.length() != s2.length())
            return false;
            
        int n = s1.length();
        
        if(n < 2)
            return s1 == s2;

        // Left rotation by 2
        string left = s1.substr(2) + s1.substr(0,2);
        
        // Right rotation by 2
        string right = s1.substr(n-2,2) + s1.substr(0,n-2);
        
        if(left == s2 || right == s2)
            return true;
            
        return false;
    }
};