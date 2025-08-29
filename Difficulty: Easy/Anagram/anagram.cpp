class Solution {
  public:
    bool areAnagrams(string& s1, string& s2) {
        // code here
        if(s1.size()!=s2.size()) return false;
        int n = s1.size();
        unordered_map<char,int> m;
        for(auto c : s1){
            m[c] ++;
        }
         for(auto c : s2){
            m[c] --;
        }
          for(auto &p : m){
           if(p.second!=0) return false;
        }
        
        return true;
        
    }
};