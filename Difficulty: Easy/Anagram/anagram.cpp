class Solution {
  public:
    bool areAnagrams(string& s1, string& s2) {
        // code here
        int n = s1.length();
        
        if(s1.length()!=s2.length())
            return false;
            
        unordered_map<char , int> h;
        for(int i = 0; i < n; i++){
            h[s1[i]]++;
            h[s2[i]]--;
        }
        
        
        
        for(auto i : h){
            if(i.second != 0) return false;
        }
        
        
        return true;
        
    }
};