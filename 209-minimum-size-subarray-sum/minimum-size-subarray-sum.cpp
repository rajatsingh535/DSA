class Solution {
public:
    int minSubArrayLen(int k, vector<int>& b) {
          int n = b.size();
          int min_len = INT_MAX;
          int sum = 0; int i = 0;
       for (int j = 0; j < n; j++) {
            sum += b[j];
            while (sum >= k) {
                min_len = min(min_len, j - i + 1);
                sum -= b[i];
                i++;
            }
        }
        return (min_len == INT_MAX) ? 0 : min_len;
    }
};