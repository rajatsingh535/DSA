class Solution {
  public:
    int longestUniqueSubstr(string &s) {
         vector<int> lastSeen(26, -1); // only lowercase letters
        int maxLength = 0;
        int start = 0;

        for (int end = 0; end < s.length(); ++end) {
            char currentChar = s[end];
            int charIndex = currentChar - 'a';

            if (lastSeen[charIndex] >= start) {
                // Character repeated within current window
                start = lastSeen[charIndex] + 1;
            }

            lastSeen[charIndex] = end;
            maxLength = max(maxLength, end - start + 1);
        }

        return maxLength;
        
    }
};
