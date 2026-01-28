class Solution {
  public:
    int maxProduct(vector<int> &arr) {
        long long maxEnd = arr[0];   // max product ending at i
        long long minEnd = arr[0];   // min product ending at i
        long long ans = arr[0];

        for (int i = 1; i < (int)arr.size(); i++) {
            long long x = arr[i];

            // If x is negative, max and min swap roles
            if (x < 0) swap(maxEnd, minEnd);

            // Either start new subarray at x, or extend previous
            maxEnd = max(x, maxEnd * x);
            minEnd = min(x, minEnd * x);

            ans = max(ans, maxEnd);
        }

        return (int)ans; // guaranteed fits in 32-bit
    }
};
