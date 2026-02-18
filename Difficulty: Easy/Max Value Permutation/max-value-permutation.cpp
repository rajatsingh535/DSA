class Solution {
  public:
    int maxValue(vector<int> &arr) {
        const long long MOD = 1000000007LL;
        sort(arr.begin(), arr.end());          // best arrangement

        long long ans = 0;
        for (long long i = 0; i < (long long)arr.size(); i++) {
            ans = (ans + (arr[i] % MOD) * (i % MOD)) % MOD;
        }
        return (int)ans;
    }
};
