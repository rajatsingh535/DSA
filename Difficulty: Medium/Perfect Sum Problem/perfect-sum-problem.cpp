class Solution {
  public:
    int perfectSum(vector<int>& arr, int target) {
        const int MOD = 1e9+7; // GFG usually expects modulo
        vector<int> dp(target+1, 0);
        dp[0] = 1;  // Empty subset
        
        for(int x : arr) {
            if(x == 0) {
                // Zero doubles all existing subset counts
                for(int s = 0; s <= target; s++) {
                    dp[s] = (dp[s] * 2) % MOD;
                }
            } 
            else {
                for(int s = target; s >= x; s--) {
                    dp[s] = (dp[s] + dp[s-x]) % MOD;
                }
            }
        }
        return dp[target];
    }
};
