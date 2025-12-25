class Solution {
  public:
    int maxLength(vector<int>& arr) {
        unordered_map<long long, int> mp;
        long long sum = 0;
        int maxLen = 0;

        for (int i = 0; i < arr.size(); i++) {
            sum += arr[i];

            // Case 1: prefix sum is zero
            if (sum == 0) {
                maxLen = i + 1;
            }

            // Case 2: prefix sum seen before
            if (mp.find(sum) != mp.end()) {
                maxLen = max(maxLen, i - mp[sum]);
            } 
            // Store first occurrence
            else {
                mp[sum] = i;
            }
        }

        return maxLen;
    }
};
