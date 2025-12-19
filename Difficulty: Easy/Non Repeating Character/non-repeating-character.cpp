class Solution {
  public:
    char nonRepeatingChar(string &s) {
        int freq[26] = {0};

        // Count frequency of each character
        for(char c : s) {
            freq[c - 'a']++;
        }

        // Find first non-repeating character
        for(char c : s) {
            if(freq[c - 'a'] == 1) {
                return c;
            }
        }

        return '$';
    }
};
