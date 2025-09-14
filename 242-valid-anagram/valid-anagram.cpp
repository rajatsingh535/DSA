class Solution {
public:
    bool isAnagram(string s, string t) {
        int n = s.length();
        if(s.length()!=t.length())
            return false;

        map<char , int> counts;
        for(int i = 0; i < n; i++){
            counts[s[i]]++;
            counts[t[i]]--;
        }

        for(auto i : counts)
            if(i.second != 0) return false;
            return true;

        
        
    }
};