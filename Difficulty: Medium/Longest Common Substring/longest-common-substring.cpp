class Solution {
  public:
    int longCommSubstr(string& s1, string& s2) {
        int n = (int)s1.size();
        int m = (int)s2.size();
        
        vector<int> prev(m + 1, 0), cur(m + 1, 0);
        int ans = 0;
        
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                if (s1[i - 1] == s2[j - 1]) {
                    cur[j] = prev[j - 1] + 1;
                    ans = max(ans, cur[j]);
                } else {
                    cur[j] = 0;
                }
            }
            prev = cur;                 // move row
            fill(cur.begin(), cur.end(), 0);  // reset current row
        }
        
        return ans;
    }
};