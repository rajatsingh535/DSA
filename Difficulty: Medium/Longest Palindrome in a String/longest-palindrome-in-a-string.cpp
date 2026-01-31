class Solution {
  public:
    string longestPalindrome(string &s) {
        int n = (int)s.size();
        if (n == 0) return "";

        int bestL = 0, bestLen = 1;

        auto expand = [&](int l, int r) {
            while (l >= 0 && r < n && s[l] == s[r]) {
                l--;
                r++;
            }
            // after loop: palindrome is (l+1 .. r-1)
            int start = l + 1;
            int len = r - l - 1;
            if (len > bestLen) {          // strictly greater => keeps first occurrence
                bestLen = len;
                bestL = start;
            }
        };

        for (int i = 0; i < n; i++) {
            expand(i, i);       // odd length
            expand(i, i + 1);   // even length
        }

        return s.substr(bestL, bestLen);
    }
};
